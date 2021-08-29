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
    GeoViewpoint(description='GeoViewpoint_3_17',position=(36.41880206399515,-76.29244790211308,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.29244790211308,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-14.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-15.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-14.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.32406248621194,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[13,10,9,3,11,16,20,13,10,5,7,13,6,11,13,14,5,4,16,14,5,11,1,4,2,7,22,12,4,10,14,12,10,0,4,6,3,4,5,15,18,12,4,15,9,2,13,11,11,6,4,4,3,4,6,15,3,10,5,3,2,15,8,18,6,6,7,6,14,14,6,4,10,9,6,12,4,4,5,7,3,6,7,5,8,9,20,11,4,5,10,5,6,3,7,12,7,7,10,11,10,12,6,15,7,6,3,5,9,12,15,10,11,0,9,13,2,7,11,23,4,1,7,9,10,10,11,10,5,4,7,7,5,10,16,8,3,9,6,10,13,15,11,13,9,15,10,9,7,6,4,5,9,3,2,11,6,7,15,10,5,7,12,17,18,18,16,17,15,14,16,13,6,6,8,6,4,4,5,2,4,6,11,6,7,7,17,7,16,11,12,16,14,13,12,6,7,19,7,5,5,5,5,8,8,10,10,8,9,14,6,10,6,12,13,13,14,18,15,17,10,14,17,15,5,6,15,16,17,15,4,16,18,23,7,10,15,11,8,13,11,13,11,13,13,14,9,10,17,14,19,12,14,18,16,9,5,16,14,12,2,7,11,8,8,9,11,15,16,20,22,21,12,13,12,17,12,14,11,5,5,4,8,8,14,10,6,6,8,9,12,13,9,15,17,21,18,16,22,14,11,17,13,16,4,13,16,12,6,6,16,17,4,3,9,12,11,10,12,13,14,15,18,20,19,5,9,15,23,22,14,10,15,19,16,11,20,21,5,5,3,11,15,16,14,15,16,16,15,14,15,13,14,17,14,15,18,17,10,10,11,14,15,13,3,8,6,2,10,17,15,11,14,10,20,11,11,10,12,13,5,4,9,13,12,14,11,7,14,13,5,6,5,3,4,3,17,18,12,12,15,12,9,18,7,17,17,6,5,12,11,11,5,5,10,15,6,15,11,13,4,4,5,9,8,17,8,7,11,13,14,8,12,4,2,6,12,13,12,5,6,10,16,12,16,13,7,5,5,8,3,3,2,5,6,4,7,21,7,10,5,6,13,13,17,3,3,6,9,13,15,15,13,10,11,13,5,3,3,3,4,3,14,18,11,19,13,5,4,9,15,17,18,16,14,22,18,10,12,10,14,12,3,1,3,4,2,5,4,10,12,13,12,10,12,12,9,15,17,4,11,15,10,12,8,15,15,13,3,3,2,1,7,2,4,5,16,8,16,11,7,11,13,15,10,11,9,7,3,5,17,22,18,7,2,2,4,2,3,3,4,4,7,5,8,8,18,15,15,13,16,21,8,7,9,6,13,17,15,3,0,3,4,1,0,2,3,3,3,15,10,8,6,9,16,8,10,10,9,3,9,6,7,10,7,4,4,3,2,3,3,3,2,0,11,11,10,9,11,8,6,5,6,4,8,1,11,7,9,10,8,6,3,5,5,1,0,1,2,2,2,6,10,11,5,9,5,5,5,4],
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
