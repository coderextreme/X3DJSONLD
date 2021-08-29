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
    GeoViewpoint(description='GeoViewpoint_2_00',position=(36.458645814959944,-76.70343749539828,15863.75038413098),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.458645814959944,-76.70343749539828,0.0),range=19036.5,child1Url=['../../tiles/3/HamptonRoadsVA0-0.x3d'],child2Url=['../../tiles/3/HamptonRoadsVA0-1.x3d'],child3Url=['../../tiles/3/HamptonRoadsVA1-0.x3d'],child4Url=['../../tiles/3/HamptonRoadsVA1-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/HamptonRoadsVA0-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.766666663596,0.0),normalPerVertex=False,xDimension=23,xSpacing=0.005748106,zDimension=23,zSpacing=0.0072443183,height=[20,31,27,13,28,32,35,25,36,26,24,21,25,25,29,28,19,26,13,24,20,16,20,27,30,21,16,39,17,28,32,36,36,33,30,26,33,26,22,22,21,15,24,22,21,20,27,15,16,33,28,22,21,20,23,30,19,29,37,32,31,33,27,17,28,22,18,22,24,18,23,26,21,28,23,23,26,34,25,35,37,34,33,34,36,36,27,38,25,25,28,26,22,19,19,19,19,17,22,18,25,39,35,32,29,25,25,30,36,21,31,33,34,35,35,17,18,19,18,28,36,27,27,39,23,23,23,27,18,23,36,27,25,33,37,35,29,28,21,25,10,18,15,24,33,23,34,26,27,22,16,22,32,31,22,29,40,36,30,26,25,24,28,24,15,13,21,20,23,24,26,27,21,16,25,21,26,29,26,28,15,21,32,28,35,33,22,15,23,21,20,21,14,23,17,25,22,32,32,29,33,30,33,33,30,24,23,32,34,25,16,19,20,18,25,12,19,12,19,34,30,36,35,32,33,23,39,22,26,28,24,23,28,22,15,23,12,18,32,25,28,17,25,18,28,23,32,37,26,36,36,16,23,29,33,27,30,41,22,27,29,19,24,33,22,29,24,28,29,32,34,37,24,31,30,22,25,32,26,20,25,25,24,18,24,23,36,26,31,29,35,31,22,24,23,14,19,25,19,22,20,24,31,26,23,29,17,13,15,24,29,32,24,31,37,30,32,21,31,36,30,17,26,33,34,25,36,19,21,21,21,21,23,25,26,30,24,24,27,27,30,22,22,22,10,26,24,24,32,32,11,26,27,17,17,30,21,31,35,28,27,34,37,22,25,29,17,23,31,24,27,20,25,23,13,18,25,26,24,28,26,30,29,23,31,24,31,24,25,17,26,37,31,19,14,25,31,25,18,25,32,28,32,30,37,32,22,32,27,33,37,27,23,28,33,25,28,32,22,16,24,36,28,39,35,31,35,34,41,31,25,31,28,36,26,24,20,26,28,29,24,24,25,26,24,21,22,37,37,34,31,31,25,24,22,20,28,25,26,26,19,27,27,20,22,26,23,25,17,34,25,23,24,27,28,25,24,19,17,22,26,31,21,37,30,37,36,34,37,26,25,26,31,28,30,32,22,35,26,22,25,25,22,27,28,22,35,31,33,35,39,37,21,27,23,29,21,29,23,22,38,30,18,31,29,26,35,26,24],
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
