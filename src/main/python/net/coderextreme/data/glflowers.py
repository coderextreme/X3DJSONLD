from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          meta(name="title", content="glflowers.x3d"),
          meta(name="creator", content="John Carlson"),
          meta(name="description", content="5 or more prismatic flowers"),
          meta(name="generator", content="X3D-Edit, https://savage.nps.edu/X3D-Edit"),
          meta(name="identifier", content="https://coderextreme.net/X3DJSONLD/src/main/data/glflowers.x3d"),
          meta(name="translated", content="22 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        NavigationInfo(
          ),
        Background(
          backUrl=("../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_back.png"), bottomUrl=("../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_bottom.png"), frontUrl=("../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_front.png"), leftUrl=("../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_left.png"), rightUrl=("../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_right.png"), topUrl=("../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/all_probes/stpeters_cross/stpeters_top.png")),
        Group(
          children=[
              ExternProtoDeclare(
                name="FlowerProto", url=["../data/flowerproto.x3d#FlowerProto"], field=[
                    field(name="vertex", accessType="inputOutput", type="MFString"),
                    field(name="fragment", accessType="inputOutput", type="MFString")]),
              ProtoDeclare(
                name="flower", ProtoBody=ProtoBody(
                  children=[
                      Group(
                        children=[
                            ProtoInstance(
                              name="FlowerProto", fieldValue=[
                                  fieldValue(name="vertex", value=("../shaders/gl_flowers_chromatic.vs")),
                                  fieldValue(name="fragment", value=("../shaders/common.fs"))])])])),
              ProtoInstance(
                name="flower"),
              ProtoInstance(
                name="flower"),
              ProtoInstance(
                name="flower"),
              ProtoInstance(
                name="flower"),
              ProtoInstance(
                name="flower"),
              ProtoInstance(
                name="flower")])]))
.XML())
