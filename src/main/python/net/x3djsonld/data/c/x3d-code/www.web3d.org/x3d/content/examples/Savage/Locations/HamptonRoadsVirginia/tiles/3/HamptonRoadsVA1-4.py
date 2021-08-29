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
    GeoViewpoint(description='GeoViewpoint_3_14',position=(36.41880206399515,-76.48213540670625,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.48213540670625,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-8.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-9.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-8.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.51374999080511,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[21,21,22,20,19,25,21,19,20,23,27,19,11,11,11,11,11,11,11,11,11,11,11,11,16,23,22,20,21,25,27,21,19,24,23,20,17,16,11,11,11,11,11,11,11,11,11,11,22,21,23,20,20,18,23,21,20,20,20,21,21,20,24,19,15,21,18,11,11,11,11,19,19,21,20,19,20,20,20,21,22,21,21,19,17,18,16,17,19,21,23,22,16,15,10,23,15,13,15,17,19,22,22,16,25,20,26,22,18,22,18,19,18,25,17,18,14,14,20,12,15,21,21,19,21,20,19,20,17,15,23,16,25,19,18,18,15,18,18,19,18,16,16,15,16,22,19,17,17,18,18,16,20,20,19,16,20,20,13,17,18,17,17,19,21,22,16,18,22,23,18,14,19,18,21,22,23,20,19,21,19,19,21,19,20,19,20,19,19,19,22,16,23,21,17,17,20,19,14,23,16,16,15,17,18,17,16,21,15,23,16,23,18,22,19,20,19,17,21,23,25,20,19,20,16,20,16,18,18,16,18,20,18,17,19,18,20,16,19,20,24,21,21,21,20,22,19,22,21,22,17,24,23,21,25,23,22,21,20,17,19,20,21,21,17,21,19,17,21,21,20,24,25,18,22,18,19,23,25,17,21,24,19,15,21,19,26,23,26,22,25,20,28,17,20,26,26,19,23,14,17,14,19,17,19,20,17,24,19,21,21,23,20,19,18,25,25,22,21,18,18,21,20,21,23,20,16,16,15,22,21,20,23,21,20,18,22,17,22,20,14,22,18,20,21,18,21,19,21,14,22,20,18,15,15,16,15,23,17,17,18,19,16,14,19,23,22,16,20,20,15,19,18,18,15,15,19,23,16,23,17,16,17,22,21,20,29,17,17,16,25,17,21,15,16,19,17,20,25,14,18,24,16,21,13,20,17,19,21,16,21,15,17,13,8,11,19,21,19,16,19,16,22,21,15,19,19,19,24,21,18,18,19,20,19,15,17,23,11,15,12,10,21,22,13,17,20,19,16,19,22,19,15,13,15,13,14,18,16,16,15,16,15,12,9,11,15,12,19,16,13,19,24,23,17,20,19,13,12,17,19,18,16,14,17,23,10,15,11,13,12,13,12,11,22,26,23,16,21,25,20,24,23,20,26,18,19,6,11,18,15,16,14,18,13,16,18,16,15,13,19,23,19,25,22,22,19,20,19,16,18,19,14,18,22,17,19,18,15,13,14,17,17,18,14,15,21,21,22,24,24,15,19,22,16,16,18,16,18,17,21,16,16,12,16,16,16,13,15,19,14,16,19,22,21,22,23,19,22,14,17,20,21,23,17,19,16,22,20,15,18,16,17,22,20,11,13,16,22,24,25,19,20,16,18,19,21,21,19,21,17,20,17,20,21,21,18,20,18,17,20,14,14,16,23,21,23,23,23,23,19,21,17,20,18,15,14,13,18,20,18,16,18,15,16,20,18,13,18,20],
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
