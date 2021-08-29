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
    GeoViewpoint(description='GeoViewpoint_3_10',position=(36.41880206399515,-76.73505207949714,7931.87519206549),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(36.21958330917119,-76.51374999080511,0))),
    GeoLOD(center=(36.41880206399515,-76.73505207949714,0.0),range=9518.25,child1Url=['../../tiles/4/HamptonRoadsVA2-0.x3d'],child2Url=['../../tiles/4/HamptonRoadsVA2-1.x3d'],child3Url=['../../tiles/4/HamptonRoadsVA3-0.x3d'],child4Url=['../../tiles/4/HamptonRoadsVA3-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/HamptonRoadsVA1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(36.37895831303036,-76.766666663596,0.0),normalPerVertex=False,xDimension=26,xSpacing=0.0025291666,zDimension=25,zSpacing=0.0033203126,height=[24,36,35,34,29,23,25,21,22,17,17,11,19,27,19,24,28,25,28,19,23,15,18,26,28,30,30,26,32,35,33,26,25,24,33,20,22,25,23,25,23,13,29,21,21,25,21,22,19,30,27,10,23,27,29,29,24,28,28,31,25,23,16,17,17,18,24,27,15,19,19,18,26,27,31,34,34,35,25,30,34,26,31,28,22,21,19,15,19,24,23,15,20,20,15,21,16,15,11,16,24,31,39,31,31,30,31,31,28,27,23,25,20,19,21,22,26,28,27,23,22,17,18,33,31,21,28,23,36,28,23,29,31,30,27,27,21,27,19,24,24,21,26,22,18,22,15,20,24,22,26,20,31,27,29,29,22,21,26,27,28,29,32,31,37,26,24,25,23,14,29,26,22,17,19,15,24,15,22,25,25,29,21,31,22,20,28,26,25,33,26,22,33,24,26,12,12,22,21,22,18,18,17,19,20,24,28,40,20,30,39,29,27,35,24,36,34,38,22,26,17,23,19,22,21,17,24,20,21,22,18,22,21,21,22,18,25,32,25,22,31,33,27,25,26,31,32,27,23,24,23,19,22,21,21,23,28,31,29,21,25,20,28,32,19,24,33,33,29,22,32,29,25,15,21,25,31,24,20,24,25,23,21,26,22,23,25,26,28,25,25,25,32,31,21,22,28,26,15,22,30,26,29,25,23,29,25,28,38,29,22,22,34,32,22,35,29,21,28,26,25,17,27,18,22,20,14,28,20,23,34,25,28,22,32,34,27,26,33,36,27,26,24,25,23,22,21,16,17,21,23,17,19,17,20,23,30,25,30,27,36,27,22,29,33,38,35,22,24,23,19,36,35,30,17,17,15,17,17,17,27,30,37,21,21,38,35,25,26,30,37,35,32,26,25,20,29,14,20,23,16,17,28,21,25,21,16,27,22,23,38,32,32,30,25,25,37,25,36,36,22,22,23,23,25,26,18,23,19,28,28,31,26,22,32,30,29,31,26,27,33,30,29,30,28,30,23,31,27,24,25,17,18,17,19,24,21,28,28,37,19,23,38,35,37,32,29,31,32,33,37,37,26,34,39,20,32,24,15,21,25,16,23,23,39,27,31,30,33,29,29,33,35,39,35,23,26,20,0,25,27,24,26,23,26,21,22,19,23,20,22,34,20,22,25,22,33,33,38,42,26,23,30,24,31,24,30,31,28,28,30,18,24,29,32,21,29,25,32,22,27,24,25,38,34,35,29,28,27,26,25,27,19,22,35,31,24,29,28,35,24,19,22,31,24,33,18,35,27,26,29,19,25,35,26,27,31,33,32,23,22,24,30,28,25,23,28,25,22,16,23,38,27,37,33,40,29,32,32,33,28,29,27,27,36,29,38,38,40,32,24,25,20,17,26,20,27,26,26,32,31,13,22,23,37,36,27,26,29,31,29,26,35,36,35,38,40,22,27,25,28,22,26,21,25,32,31,26,11,16],
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
