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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_2_01',position=(36.458645814959944,-76.57697915900283,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.458645814959944,-76.57697915900283,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA0-2.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA0-3.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA1-2.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.64020832720055,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[20,27,20,26,17,13,19,29,15,14,27,14,31,15,14,17,21,20,21,15,20,18,19,20,19,25,23,28,17,13,20,14,31,15,17,19,18,16,19,25,20,18,18,16,17,18,24,23,18,11,17,23,36,15,18,21,25,15,25,24,15,18,13,24,19,19,20,15,18,26,25,24,33,16,19,12,16,20,19,15,21,24,21,17,20,22,23,20,21,23,23,24,35,32,25,19,23,19,16,20,17,8,28,28,31,24,25,18,16,22,26,24,20,22,24,28,18,19,33,28,24,21,29,16,19,21,33,21,20,17,20,17,18,24,20,21,17,25,25,26,20,25,34,28,26,29,15,23,16,24,20,16,27,11,16,23,16,21,21,18,24,28,25,22,27,27,27,20,32,26,21,15,15,32,18,22,26,18,25,19,23,16,21,13,23,21,21,22,26,22,34,28,24,19,33,20,27,25,26,28,20,24,21,19,23,25,19,28,31,18,18,31,19,32,32,31,20,27,17,17,26,25,21,17,23,25,24,18,26,22,23,33,30,18,21,21,24,25,16,20,26,23,13,18,22,13,24,23,20,23,18,19,26,22,26,36,23,12,17,24,19,26,23,12,20,14,16,28,29,27,14,25,4,17,15,18,19,26,29,21,28,37,24,12,32,16,27,15,18,25,14,21,24,26,21,27,16,21,20,17,25,19,30,16,26,29,14,31,14,16,34,13,22,24,22,28,26,22,22,21,22,20,10,18,19,30,26,28,24,29,22,19,28,24,14,16,6,11,6,19,24,22,21,20,20,23,31,22,23,25,36,30,23,27,25,26,22,16,15,24,16,27,29,24,23,22,23,21,26,27,26,12,26,23,25,25,25,24,27,22,27,19,14,28,27,22,23,26,28,24,23,28,27,23,25,23,32,27,23,25,24,28,28,24,20,16,11,22,23,19,22,23,19,20,20,21,26,30,35,33,21,32,25,18,28,26,27,21,22,33,28,21,20,21,18,19,18,26,26,39,37,23,22,23,17,27,23,19,21,22,19,17,19,22,23,13,21,17,22,20,21,21,27,29,26,27,24,23,23,31,27,25,30,21,20,27,18,20,15,18,20,19,21,22,28,21,39,40,19,21,19,32,26,30,22,25,18,18,34,25,20,17,19,22,21,21,24,27,26,31,36,21,28,22,31,30,28,22,28,19,26,26,25,20,18,20,16,19,18],
            geoOrigin=GeoOrigin(USE='ORIGIN')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful")
