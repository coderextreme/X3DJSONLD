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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(name='Geospatial',level=1)]),
  Scene=Scene(
    children=[
    GeoLOD(center=(41.52686794665262,-71.31380072903733,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-14.x3d'],child2Url=['../../tiles/5/newport10-15.x3d'],child3Url=['../../tiles/5/newport11-14.x3d'],child4Url=['../../tiles/5/newport11-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.32187158681484,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[12,14,17,16,14,17,14,12,14,12,14,16,19,21,19,22,19,18,17,19,17,20,21,21,12,15,18,16,17,16,18,11,11,9,9,15,15,18,15,15,14,15,14,13,14,16,18,18,21,20,22,19,10,8,8,8,7,9,9,9,12,9,13,14,13,13,9,11,13,16,17,17,17,22,22,18,7,5,4,6,3,5,7,5,5,10,8,10,10,8,10,12,13,14,15,17,19,18,14,7,0,0,0,1,1,0,1,0,2,5,7,8,7,7,11,10,17,13,18,20,17,8,0,0,0,0,0,0,0,0,0,0,0,0,4,8,6,8,14,9,12,15,19,19,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,5,8,14,9,14,16,16,17,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,12,7,8,12,18,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,11,9,12,19,21,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,14,11,12,16,16,19,19,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,14,13,12,13,18,22,23,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,8,16,16,18,24,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,7,9,9,10,19,26,27,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,7,8,12,12,21,29,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,7,11,13,16,23,24,26,26,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,8,11,16,20,23,24,30,29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,8,8,13,19,24,26,31,32,32,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,10,16,19,23,28,29,32,31,30,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,15,19,24,27,29,30,32,31,31,0,0,0,0,0,0,0,0,0,1,1,1,0,1,12,14,18,28,39,34,31,31,31,31,0,0,0,0,0,0,0,0,0,0,0,0,0,3,15,19,26,31,35,37,34,33,33,33,0,0,0,0,0,0,0,0,0,0,0,0,0,2,14,21,31,35,35,34,36,36,35,35,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,23,32,33,34,36,39,35,32,31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,22,31,35,34,36,37,35,32,30],
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
