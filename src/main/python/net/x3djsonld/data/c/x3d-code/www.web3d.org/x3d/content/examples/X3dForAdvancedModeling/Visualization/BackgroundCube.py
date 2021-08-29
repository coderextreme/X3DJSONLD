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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='BackgroundCube.x3d',name='title'),
    meta(content='Background with labeled side images and wide field-of-view (FOV) Viewpoints, suitable for scene-orientation testing.',name='description'),
    meta(content='29 December 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='TextureBackgroundCube.x3d',name='reference'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.x3d',name='reference'),
    meta(content='../Animation/CubeWithLabeledSidesViewpointSequencer.png',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Visualization/BackgroundCube.x3d',name='identifier'),
    meta(content='https://www.web3d.org/x3d/content/examples/license.html',name='license'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator')]),
  Scene=Scene(
    children=[
    WorldInfo(title='BackgroundCube.x3d'),
    Background(backUrl=["../GeometricShapes/images/back.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/back.png"],bottomUrl=["../GeometricShapes/images/bottom.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/bottom.png"],frontUrl=["../GeometricShapes/images/front.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/front.png"],leftUrl=["../GeometricShapes/images/left.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/left.png"],rightUrl=["../GeometricShapes/images/right.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/right.png"],topUrl=["../GeometricShapes/images/top.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/images/top.png"]),
    Viewpoint(description='Front image of Background seen from origin',fieldOfView=1.570796,position=(0,0,0)),
    Viewpoint(description='Left image of Background seen from origin',fieldOfView=1.570796,orientation=(0,1,0,-1.570796),position=(0,0,0)),
    Viewpoint(description='Top image of Background seen from origin',fieldOfView=1.570796,orientation=(1,0,0,1.570796),position=(0,0,0)),
    Viewpoint(description='Back image of Background seen from origin',fieldOfView=1.570796,orientation=(0,1,0,3.141593),position=(0,0,0)),
    Viewpoint(description='Right image of Background seen from origin',fieldOfView=1.570796,orientation=(0,1,0,1.570796),position=(0,0,0)),
    Viewpoint(description='Bottom image of Background seen from origin',fieldOfView=1.570796,orientation=(1,0,0,-1.570796),position=(0,0,0))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BackgroundCube.py")
