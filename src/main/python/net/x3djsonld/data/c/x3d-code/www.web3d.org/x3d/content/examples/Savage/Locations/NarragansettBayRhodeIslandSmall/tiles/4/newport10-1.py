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
    GeoLOD(center=(41.607576524427735,-71.41065102236746,0.0),range=2150.0764,child1Url=['../../tiles/5/newport20-2.x3d'],child2Url=['../../tiles/5/newport20-3.x3d'],child3Url=['../../tiles/5/newport21-2.x3d'],child4Url=['../../tiles/5/newport21-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.599505666650224,-71.41872188014497,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[9,7,6,6,10,12,5,3,4,7,4,4,4,4,4,5,5,5,3,8,6,0,0,0,7,8,7,9,9,7,5,5,2,3,2,3,4,5,4,6,6,7,3,3,3,0,0,0,9,9,6,9,10,9,7,3,1,2,2,2,1,3,2,8,8,5,4,3,4,0,0,0,8,7,7,4,5,8,7,5,3,2,3,3,4,6,12,9,7,6,7,4,5,0,0,0,10,10,10,9,9,5,7,7,7,7,5,3,4,4,6,9,12,11,10,8,3,0,0,0,9,11,10,11,12,10,11,11,10,7,6,7,7,8,7,10,10,9,10,12,5,0,0,0,9,11,11,10,10,12,12,10,9,10,10,9,8,10,11,8,8,10,10,8,1,0,0,0,12,12,11,12,11,11,11,8,9,6,7,6,8,8,8,10,8,8,10,8,2,0,0,0,12,9,10,11,10,10,7,8,5,6,6,6,7,6,7,7,10,9,7,8,2,0,0,0,11,11,11,10,11,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,9,7,7,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,7,6,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,2,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,4,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,6,6,5,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8,7,10,9,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,10,9,8,9,7,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,8,7,8,8,9,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,12,9,9,8,10,9,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,12,11,12,12,11,6,6,10,9,2,1,0,0,0,0,0,0,0,0,0,0,0,0,0,16,18,15,9,9,9,9,10,11,11,8,6,4,0,0,0,0,0,0,0,0,0,0,0,14,15,15,14,14,13,14,12,9,8,7,7,7,2,0,0,0,0,0,4,1,0,0,0,14,15,16,16,15,14,14,13,9,8,7,8,8,4,0,0,0,0,3,6,1,0,0,0],
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
