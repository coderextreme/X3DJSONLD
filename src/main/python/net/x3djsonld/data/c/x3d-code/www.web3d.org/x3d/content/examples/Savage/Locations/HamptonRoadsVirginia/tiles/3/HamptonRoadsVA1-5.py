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
    GeoViewpoint(description='GeoViewpoint_3_15',position=(36.41880206399515,-76.41890623850853,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.41890623850853,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-10.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-11.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-10.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.45052082260739,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[23,18,23,20,20,19,16,16,14,18,16,16,12,16,19,22,20,15,16,17,7,4,8,4,9,9,20,21,25,19,21,17,13,18,18,13,16,22,22,18,16,19,19,14,17,14,14,13,15,13,16,13,20,18,14,20,18,18,16,16,14,16,19,15,14,22,21,21,13,16,14,15,17,14,18,16,11,12,16,17,16,17,19,18,16,13,10,20,17,19,22,16,17,16,13,14,14,13,14,16,15,17,14,15,15,21,18,18,17,16,14,13,18,17,10,21,17,17,15,14,13,15,12,16,14,12,13,14,12,11,16,16,20,16,23,20,16,18,12,14,17,17,14,13,15,16,11,11,13,16,15,11,13,13,10,17,19,20,15,17,21,14,21,15,19,16,16,15,15,17,14,16,15,13,10,13,10,13,13,17,11,10,21,17,18,17,17,12,22,21,20,11,16,19,16,14,15,14,12,11,13,18,19,15,13,15,14,12,17,17,23,20,20,20,18,15,16,15,6,12,15,13,11,13,11,15,14,16,19,20,14,13,16,14,17,17,17,20,18,19,15,13,12,13,16,13,12,14,15,15,12,16,13,15,16,16,19,15,19,15,19,20,18,24,16,10,14,16,12,20,19,12,11,16,16,16,14,14,12,15,11,16,15,16,16,14,23,22,20,17,13,12,16,18,14,16,13,16,12,13,16,12,14,14,17,12,8,14,13,18,12,15,17,16,11,20,11,14,14,16,20,19,19,20,16,14,15,19,17,12,15,14,15,9,16,17,16,15,14,18,15,16,19,13,14,15,16,19,15,16,15,17,14,17,16,13,16,15,14,15,14,13,12,11,16,18,13,17,13,12,12,17,12,16,23,20,17,19,19,17,16,17,17,14,16,12,17,14,17,19,11,15,13,14,14,12,13,15,14,15,14,15,17,16,20,24,20,17,13,14,16,13,16,19,14,12,10,13,14,17,17,12,17,16,15,19,21,17,18,22,19,26,19,17,14,21,16,19,13,15,17,15,12,15,12,12,13,16,15,13,15,14,15,26,25,26,16,18,21,19,12,17,16,21,19,15,9,15,11,9,13,13,13,11,8,16,14,14,18,20,21,20,20,14,19,17,17,18,15,14,17,21,14,14,13,15,11,13,17,12,15,19,19,13,14,17,13,17,20,18,20,18,15,17,22,15,16,16,13,16,15,15,15,13,14,13,15,21,11,14,14,17,15,15,16,15,16,18,23,19,20,21,21,22,20,15,16,12,14,17,17,12,17,15,18,18,13,15,14,18,14,17,19,16,20,23,21,19,17,19,21,16,16,15,16,11,11,13,13,19,18,14,14,14,15,10,15,16,20,19,22,19,24,22,23,17,22,22,16,16,13,14,18,13,15,13,19,17,13,13,17,16,17,16,16,18,19,23,17,19,18,21,15,19,20,15,15,12,14,14,15,15,16,14,15,15,21,19,16,18,19,14,19,16,19,22,19,18,19,14],
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
