###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='WrapperTagsExample.x3d',name='title'),
    meta(content='Demonstrate and test field-name wrapper tags. Links to document "Wrapper Tags Considered Harmful." Scene includes 21 nodes, 34 open/close element tags, 44 wrapper tags, producing 78 scene-graph tags total if wrapper tags are required.',name='description'),
    meta(content='21 April 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='WrapperTagsExampleWrapped.html',name='reference'),
    meta(content='WrapperTagsExampleUnwrapped.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  <children> *** wrapper tag *** 
    children=[
    WorldInfo(title='WrapperTagsExample.x3d'),
    Transform(translation=(0,-3,0),
      #  <children> *** wrapper tag *** 
      children=[
      Shape(
        #  <geometry> *** wrapper tag *** 
        geometry=Cylinder(height=1.5,radius=.75),
        #  </geometry> *** wrapper tag *** 
        #  <appearance> *** wrapper tag *** 
        appearance=Appearance(
          #  <texture> *** wrapper tag *** 
          texture=ImageTexture(url=["earth-topo-small.png","earth-topo-small.gif","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo-small.png","https://www.web3d.org/x3d/content/examples/Basic/development/earth-topo-small.gif"]),
          #  </texture> *** wrapper tag *** 
          #  <textureTransform> *** wrapper tag *** 
          textureTransform=TextureTransform(rotation=-2.356),
          #  </textureTransform> *** wrapper tag *** 
          ),
        #  </appearance> *** wrapper tag *** 
        )]
      #  </children> *** wrapper tag *** 
      ),
    #  </children> *** wrapper tag *** 
    #  <children> *** wrapper tag *** 
    LOD(
      #  <children> *** wrapper tag *** 
      children=[
      Anchor(description='Click to read explanation page',parameter=["target=_blank"],url=["WrapperTagsConsideredHarmful.html","https://www.web3d.org/x3d/content/examples/Basic/development/WrapperTagsConsideredHarmful.html"],
        #  <children> *** wrapper tag *** 
        children=[
        Shape(
          #  <appearance> *** wrapper tag *** 
          appearance=Appearance(
            #  <material> *** wrapper tag *** 
            material=Material(diffuseColor=(.6,.1,.1)),
            #  </material> *** wrapper tag *** 
            ),
          #  <appearance> *** wrapper tag *** 
          #  <geometry> *** wrapper tag *** 
          geometry=Text(string=["wrapper tags are ","field container names","that hold nodes"],
            #  <fontStyle> *** wrapper tag *** 
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]),
            #  </fontStyle> *** wrapper tag *** 
            ),
          #  </geometry> *** wrapper tag *** 
          )]
        #  </children> *** wrapper tag *** 
        ),
      #  </children> *** wrapper tag *** 
      #  <children> *** wrapper tag *** 
      Sound(
        #  <source> *** wrapper tag *** 
        source=AudioClip(description='empty audio clip'),
        #  </source> *** wrapper tag *** 
        )]
      #  </children> *** wrapper tag *** 
      ),
    #  </children> *** wrapper tag *** 
    #  <children> *** wrapper tag *** 
    Switch(whichChoice=0,
      #  <children> *** wrapper tag *** 
      children=[
      Shape(
        #  <geometry> *** wrapper tag *** 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,-1],
          #  <color> *** wrapper tag *** 
          color=Color(color=[(0,0,1),(0,1,0),(1,0,0),(1,1,1)]),
          #  </color> *** wrapper tag *** 
          #  <coord> *** wrapper tag *** 
          coord=Coordinate(point=[(-5,-3,-2),(5,-3,-2),(5,1,-2),(-5,1,-2)]),
          #  </coord> *** wrapper tag *** 
          #  <normal> *** wrapper tag *** 
          normal=Normal(vector=[(0,0,-1),(0,0,-1),(0,0,-1),(0,0,-1)]),
          #  </normal> *** wrapper tag *** 
          #  <texcoord> *** wrapper tag *** 
          texCoord=TextureCoordinate(point=[(-1,-1),(-1,1),(1,1),(1,-1)]),
          #  </texcoord> *** wrapper tag *** 
          ),
        #  </geometry> *** wrapper tag *** 
        )]
      #  </children> *** wrapper tag *** 
      )]
    #  </children> *** wrapper tag *** 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WrapperTagsExample.py")
