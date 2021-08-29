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
    GeoLOD(center=(41.52686794665262,-71.28151729792728,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-18.x3d'],child2Url=['../../tiles/5/newport10-19.x3d'],child3Url=['../../tiles/5/newport11-18.x3d'],child4Url=['../../tiles/5/newport11-19.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-9.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.28958815570479,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[29,31,31,33,35,42,44,46,48,48,49,48,49,53,59,60,63,62,66,64,61,63,60,60,28,32,36,35,41,43,46,48,49,50,51,52,49,51,54,55,59,62,64,62,64,64,62,61,30,28,34,36,40,44,44,47,50,51,51,51,53,51,51,55,58,63,63,62,63,63,65,64,34,33,36,39,40,42,44,48,50,51,50,52,52,52,55,59,61,61,60,60,63,61,58,58,32,36,36,43,42,46,48,49,50,52,51,50,51,52,53,54,58,57,59,61,61,59,60,61,33,36,37,40,41,45,49,52,53,51,53,51,49,55,53,53,56,59,60,60,60,60,63,62,35,39,42,43,40,46,52,55,50,50,54,52,52,52,55,55,58,59,57,58,58,61,61,61,38,40,43,42,46,50,51,51,54,52,52,52,51,51,53,56,56,59,60,62,63,61,62,62,39,42,47,47,50,50,55,51,51,50,50,49,53,52,52,54,55,55,62,76,79,61,58,58,39,43,49,47,51,54,54,52,53,49,47,51,55,50,52,55,57,59,62,67,65,61,58,58,40,41,44,49,51,53,53,52,51,52,49,47,48,50,53,54,57,62,63,59,63,58,54,52,41,41,43,47,49,51,51,51,51,52,49,50,47,49,51,52,58,57,59,59,57,57,62,61,40,42,43,48,48,50,51,51,51,50,48,48,46,49,51,54,56,57,58,55,57,61,64,64,40,44,46,45,48,48,49,49,51,48,46,45,49,50,50,52,54,55,57,57,56,56,60,60,37,40,44,47,49,49,48,49,47,45,46,47,45,49,50,50,52,53,53,54,54,58,60,60,38,41,42,45,46,46,45,47,48,48,48,45,46,51,50,50,50,53,53,54,58,59,56,55,39,41,44,44,47,46,45,45,45,44,45,44,43,47,51,53,52,54,55,53,55,54,53,51,39,41,41,45,43,44,44,45,45,46,46,46,45,46,49,51,51,52,51,53,54,53,53,54,41,40,40,41,41,42,43,45,44,46,45,46,46,46,48,49,53,52,51,52,54,59,56,56,39,38,38,39,42,42,42,44,46,46,47,50,50,46,51,52,51,53,55,56,54,55,54,54,38,38,38,38,37,37,41,44,45,49,50,55,52,48,51,53,52,53,56,55,52,54,57,57,38,36,39,36,36,39,41,41,45,46,48,48,52,53,57,56,58,57,54,55,54,58,57,58,42,39,38,35,37,40,41,44,45,47,53,53,56,55,51,56,58,54,53,55,58,60,60,58,42,39,38,37,38,40,41,43,44,45,51,54,56,54,52,56,57,54,54,56,58,59,60,59],
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
