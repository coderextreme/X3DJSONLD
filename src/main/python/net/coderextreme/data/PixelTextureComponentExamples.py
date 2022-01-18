from x3d import *
print(
X3D(
  profile="Immersive", version="3.3", head=head(  children=[
      
          meta(name="title", content="PixelTextureComponentExamples.x3d"),
          meta(name="description", content="This example shows the five PixelTexture components, with 0 to 4 components each, shown in Table 5-18."),
          meta(name="creator", content="Leonard Daly and Don Brutzman"),
          meta(name="created", content="25 August 2008"),
          meta(name="modified", content="7 January 2014"),
          meta(name="reference", content="http://X3dGraphics.com"),
          meta(name="reference", content="X3D for Web Authors, Table 5.18"),
          meta(name="reference", content="https://www.web3d.org/x3d/content/examples/X3dResources.html"),
          meta(name="rights", content="Copyright (c) 2006, Daly Realism and Don Brutzman"),
          meta(name="subject", content="X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com"),
          meta(name="identifier", content="http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureComponentExamples.x3d"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../license.html"),
          meta(name="translated", content="18 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Background(
          skyColor=(0.1,0.1,0.4)),
        Viewpoint(
          description="Table 5.18 SFImage component examples", position=(0,0,14)),
        Transform(
          translation=(-6,0,0), children=[
              Shape(
                appearance=Appearance(
                    texture=PixelTexture(
                        DEF="ZeroComponents")), geometry=Box(
                    )),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          string=["0"], fontStyle=FontStyle(
                              DEF="CenterJustify", justify=["MIDDLE","MIDDLE"])), appearance=Appearance(
                          DEF="TextMaterial", material=Material(
                              diffuseColor=(1,1,1))))])]),
        Transform(
          translation=(-3,0,0), children=[
              Shape(
                appearance=Appearance(
                    texture=PixelTexture(
                        DEF="OneComponent", image=(1,2,1,255,0))), geometry=Box(
                    )),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          string=["1"], fontStyle=FontStyle(
                              USE="CenterJustify")), appearance=Appearance(
                          USE="TextMaterial"))])]),
        Transform(
          children=[
              Shape(
                appearance=Appearance(
                    texture=PixelTexture(
                        DEF="TwoComponents", image=(2,1,2,52479,8823))), geometry=Box(
                    )),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          string=["2"], fontStyle=FontStyle(
                              USE="CenterJustify")), appearance=Appearance(
                          USE="TextMaterial"))])]),
        Transform(
          translation=(3,0,0), children=[
              Shape(
                appearance=Appearance(
                    children=[#note 0x000000 = 0
], texture=PixelTexture(
                        DEF="ThreeComponents", image=(2,4,3,16711680,65280,0,0,0,0,16777215,16776960))), geometry=Box(
                    )),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          string=["3"], fontStyle=FontStyle(
                              USE="CenterJustify")), appearance=Appearance(
                          USE="TextMaterial"))])]),
        Transform(
          translation=(6,0,0), children=[
              Shape(
                appearance=Appearance(
                    children=[#Erroneous value in book: 1 0 0 255, 0 1 0 255, 0 0 1 255, 1 0 0 127, 0 1 0 127, 0 0 1 127
], texture=PixelTexture(
                        DEF="FourComponents", image=(3,2,4,4278190335,16711935,65535,4278190207,16711807,65407))), geometry=Box(
                    )),
              Transform(
                translation=(0,-2,0), children=[
                    Shape(
                      geometry=Text(
                          string=["4"], fontStyle=FontStyle(
                              USE="CenterJustify")), appearance=Appearance(
                          USE="TextMaterial"))])]),#Background from PixelTextureBW.x3d

        Transform(
          translation=(0,6,-2), children=[
              Shape(
                appearance=Appearance(
                    texture=PixelTexture(
                        image=(8,8,1,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204,204,0,204,0,204,0,204,0,0,204,0,204,0,204,0,204))), geometry=Box(
                    size=(16,16,0.1)))])]))
.XML())
