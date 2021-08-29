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
    GeoLOD(center=(41.52686794665262,-71.41065102236746,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-2.x3d'],child2Url=['../../tiles/5/newport10-3.x3d'],child3Url=['../../tiles/5/newport11-2.x3d'],child4Url=['../../tiles/5/newport11-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[33,27,19,15,12,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,27,21,16,11,10,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,30,23,17,14,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,36,28,25,18,15,10,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,38,27,23,24,16,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,35,28,23,25,16,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,26,23,25,18,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,34,29,25,26,19,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,31,29,25,18,13,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,33,26,23,13,5,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,32,26,24,15,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,29,25,23,16,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,24,20,14,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,26,22,16,9,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,28,16,13,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,19,14,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,25,16,6,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,20,12,4,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,14,7,3,3,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,6,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],
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
