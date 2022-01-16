from x3d import *
print(
X3D(
  profile="Immersive", version="3.0", head=head(  children=[
      
          meta(name="title", content="TextExamples.x3d"),
          meta(name="description", content="Show different escape-character text examples for embedded quotation marks."),
          meta(name="creator", content="Don Brutzman"),
          meta(name="created", content="7 April 2001"),
          meta(name="modified", content="26 April 2016"),
          meta(name="warning", content="Note that X3D Canonicalization (C14N) will scrub alternate XML character representations, be careful to check original encoding into version control."),
          meta(name="warning", content="Usually this source document needs to be inspected and edited using a plain-text editor in order to see the differences in these XML-equivalent text representations."),
          meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/development/TextExamples.x3d"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../license.html"),
          meta(name="translated", content="16 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Transform(
          translation=(0,2,0), children=[
              Shape(
                geometry=Text(
                    string=["Compare special character escaping"], fontStyle=FontStyle(
                        DEF="testFontStyle", justify=["MIDDLE","MIDDLE"], size=0.8)), appearance=Appearance(
                    DEF="LightBlueAppearance", material=Material(
                        diffuseColor=(0.1,0.7,0.7))))]),
        Transform(
          translation=(-3,0,0), children=[
              Shape(
                geometry=Text(
                    string=["I don't think so","","he said \"Hi\""], fontStyle=FontStyle(
                        USE="testFontStyle")), appearance=Appearance(
                    USE="LightBlueAppearance"))]),
        Transform(
          translation=(3,0,0), children=[
              Shape(
                geometry=Text(
                    string=["I don't think so","","he said \"Hi\""], fontStyle=FontStyle(
                        USE="testFontStyle")), appearance=Appearance(
                    USE="LightBlueAppearance"))])]))
.XML())
