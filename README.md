# QUICHE

QUICHE stands for QUIC, Http/2, Etc. It is Google's production-ready
implementation of QUIC, HTTP/2, HTTP/3, and related protocols and tools. It
powers Google's servers, Chromium, Envoy, and other projects. It is actively
developed and maintained.

The canonical open-source QUICHE repository is at
https://quiche.googlesource.com/quiche.

To embed QUICHE in your project, platform APIs need to be implemented and build
files need to be created. Note that it is on the QUICHE team's roadmap to
include default implementation for all platform APIs and to open-source build
files. In the meanwhile, take a look at open source embedders like Chromium and
Envoy to get started:

*   Platform implementations in Chromium:
    +   [quic/platform](https://source.chromium.org/chromium/chromium/src/+/main:net/net/quic/platform/impl/)
    +   [http2/platform](https://source.chromium.org/chromium/chromium/src/+/main:net/net/http2/platform/impl/)
    +   [quiche/common/platform](https://source.chromium.org/chromium/chromium/src/+/main:net/quiche/net/quiche/common/platform/impl/)
*   [Build file in Chromium](https://source.chromium.org/chromium/chromium/src/+/main:net/third_party/quiche/BUILD.gn)
*   [Platform implementations in Envoy](https://github.com/envoyproxy/envoy/tree/master/source/common/quic/platform)
*   [Build file in Envoy](https://github.com/envoyproxy/envoy/blob/main/bazel/external/quiche.BUILD)

QUICHE is only supported on little-endian platforms.
