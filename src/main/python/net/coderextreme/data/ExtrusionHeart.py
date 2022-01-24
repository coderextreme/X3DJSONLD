from x3d import *
print(
X3D(
  profile="Immersive", version="3.0", head=head(  children=[
      
          meta(name="title", content="ExtrusionHeart.x3d"),
          meta(name="description", content="Simple extrusion of a Valentine heart."),
          meta(name="creator", content="Class participants in course Introduction to VRML/X3D."),
          meta(name="created", content="14 February 2001"),
          meta(name="modified", content="27 November 2015"),
          meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d"),
          meta(name="generator", content="X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit"),
          meta(name="license", content="../license.html"),
          meta(name="translated", content="22 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Viewpoint(
          description="Extrusion Heart", orientation=(1,0,0,1.57), position=(0,-4,0)),
        Transform(
          translation=(0,-0.5,0), children=[
              Shape(
                geometry=Extrusion(
                    creaseAngle=3.14159, crossSection=(0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8), scale=(0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01), solid=False, spine=(0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0)), appearance=Appearance(
                    material=Material(
                        diffuseColor=(0.8,0.3,0.3))))])]))
.XML())
