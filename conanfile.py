from mc_conan import MCConanFile


class Lib(MCConanFile):
    name = "CmBacktrace"
    version = "0.2"
    # exports_sources = "*","!tmp","!demos"
    exports_sources = "cm_backtrace/*","CMakeLists.txt"
    description = "CmBacktrace mc定制版本"

    def mc_package_src(self):
        # 把所有的头文件放到同一个位置
        self.copy("*.h", dst="include", src="cm_backtrace",
                  keep_path=True, excludes=["cmb_cfg.h"])
        self.copy("CMakeLists.txt",dst="mc_source",src=".")
        file_ext = ['.h', '.c', '.cpp', '.txt', "/gcc/cmb_fault.S"]
        for one in file_ext:
            self.copy("cm_backtrace/*" + one, dst="mc_source",
                      src=".", keep_path=True, excludes=["cmb_cfg.h"])
