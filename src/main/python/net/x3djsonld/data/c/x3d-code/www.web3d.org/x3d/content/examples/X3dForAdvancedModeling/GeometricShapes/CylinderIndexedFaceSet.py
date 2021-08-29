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
    meta(content='CylinderIndexedFaceSet.x3d',name='title'),
    meta(content='Construct a Cylinder using IndexedFaceSet. Top and bottom 24-point polygon (circle) created by X3D-Edit, sides computed manually.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='7 May 2013',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Cylinder IndexedFaceSet',name='subject'),
    meta(content='CylinderIndexedFaceSet.H3DViewer.png',name='Image'),
    meta(content='CylinderIndexedFaceSet.InstantReality.png',name='Image'),
    meta(content='CylinderIndexedFaceSet.X3DOM.png',name='Image'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CylinderIndexedFaceSet.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CylinderIndexedFaceSet.x3d'),
    Viewpoint(description='Cylinder built using IndexedFaceSet',orientation=(1,0,0,-0.463648),position=(0,4,8)),
    Shape(DEF='CylinderTopBottomShape',
      geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,0,-1,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,24,-1],solid=False,
        coord=Coordinate(DEF='CylinderPoints24',point=[(0,0,1),(0.259,0,0.966),(0.5,0,0.866),(0.707,0,0.707),(0.866,0,0.5),(0.966,0,0.259),(1,0,0),(0.966,0,-0.259),(0.866,0,-0.5),(0.707,0,-0.707),(0.5,0,-0.866),(0.259,0,-0.966),(0,0,-1),(-0.259,0,-0.966),(-0.5,0,-0.866),(-0.707,0,-0.707),(-0.866,0,-0.5),(-0.966,0,-0.259),(-1,0,-0),(-0.966,0,0.259),(-0.866,0,0.5),(-0.707,0,0.707),(-0.5,0,0.866),(-0.259,0,0.966),(0,2,1),(0.259,2,0.966),(0.5,2,0.866),(0.707,2,0.707),(0.866,2,0.5),(0.966,2,0.259),(1,2,0),(0.966,2,-0.259),(0.866,2,-0.5),(0.707,2,-0.707),(0.5,2,-0.866),(0.259,2,-0.966),(0,2,-1),(-0.259,2,-0.966),(-0.5,2,-0.866),(-0.707,2,-0.707),(-0.866,2,-0.5),(-0.966,2,-0.259),(-1,2,-0),(-0.966,2,0.259),(-0.866,2,0.5),(-0.707,2,0.707),(-0.5,2,0.866),(-0.259,2,0.966)])),
      appearance=Appearance(DEF='BlueAppearance',
        material=Material(diffuseColor=(0.439216,0.631373,1)))),
    Shape(DEF='CylinderSideShape',
      geometry=IndexedFaceSet(coordIndex=[1,24,0,1,25,24,1,-1,2,25,1,2,26,25,2,-1,3,26,2,3,27,26,3,-1,4,27,3,4,28,27,4,-1,5,28,4,5,29,28,5,-1,6,29,5,6,30,29,6,-1,7,30,6,7,31,30,7,-1,8,31,7,8,32,31,8,-1,9,32,8,9,33,32,9,-1,10,33,9,10,34,33,10,-1,11,34,10,11,35,34,11,-1,12,35,11,12,36,35,12,-1,13,36,12,13,37,36,13,-1,14,37,13,14,38,37,14,-1,15,38,14,15,39,38,15,-1,16,39,15,16,40,39,16,-1,17,40,16,17,41,40,17,-1,18,41,17,18,42,41,18,-1,19,42,18,19,43,42,19,-1,20,43,19,20,44,43,20,-1,21,44,20,21,45,44,21,-1,22,45,21,22,46,45,22,-1,23,46,22,23,47,46,23,-1,0,47,23,0,24,47,0,-1],creaseAngle=1.570796,solid=False,
        coord=Coordinate(USE='CylinderPoints24')),
      appearance=Appearance(USE='BlueAppearance'))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CylinderIndexedFaceSet.py")
