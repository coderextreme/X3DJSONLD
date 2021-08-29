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
    GeoLOD(center=(41.52686794665262,-71.37836759125742,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-6.x3d'],child2Url=['../../tiles/5/newport10-7.x3d'],child3Url=['../../tiles/5/newport11-6.x3d'],child4Url=['../../tiles/5/newport11-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.38643844903493,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[24,27,29,33,38,31,24,21,19,18,17,17,19,20,21,20,22,28,31,31,26,24,17,16,28,31,32,36,34,31,29,26,21,20,20,19,19,19,16,19,21,24,27,28,25,21,21,19,33,37,36,35,39,36,34,31,26,22,20,19,18,20,19,18,21,22,24,22,19,23,22,20,31,35,36,37,42,43,41,35,30,26,19,17,17,15,16,18,18,18,22,25,23,21,21,21,33,34,36,38,40,45,46,40,32,26,23,19,20,19,16,16,17,17,19,21,26,22,18,18,33,37,40,42,44,46,44,40,37,31,24,21,18,13,16,17,16,15,16,17,19,20,21,22,33,36,40,42,44,45,44,41,38,32,28,23,19,18,17,15,15,18,15,15,19,20,22,24,30,34,39,41,41,45,45,46,40,35,31,25,19,17,14,13,14,14,14,12,16,18,20,21,30,32,37,35,38,40,44,44,42,37,30,25,20,18,15,13,12,13,13,16,15,21,21,21,29,30,33,34,32,37,41,45,41,36,31,25,21,18,15,14,12,12,16,17,20,22,22,23,27,28,31,32,34,35,38,42,42,35,30,25,22,20,16,14,11,12,15,17,20,21,26,27,24,27,28,30,32,34,39,39,39,39,33,27,24,19,16,14,13,13,15,15,17,22,25,25,26,25,27,27,30,33,36,38,39,38,34,29,26,20,15,15,12,12,13,13,16,18,24,25,26,27,27,26,31,33,33,35,38,39,34,31,24,21,19,14,14,12,12,13,13,15,17,18,25,28,24,26,30,32,35,35,38,37,36,32,27,24,22,17,16,14,10,10,9,13,17,17,25,25,28,28,29,31,33,36,38,38,37,35,31,25,22,19,18,13,9,11,13,14,15,16,27,27,27,27,29,31,33,35,40,39,38,34,30,27,23,20,17,14,11,14,17,17,15,15,24,25,26,27,29,32,33,35,36,39,39,36,32,27,24,22,17,15,17,16,11,7,14,16,25,28,26,27,30,34,34,36,36,37,39,37,34,30,26,23,21,17,15,15,14,14,18,19,26,28,27,26,32,35,35,35,37,38,38,39,34,33,29,25,20,20,19,17,15,14,13,13,22,23,25,28,32,37,37,37,38,40,42,43,39,35,31,29,24,24,20,17,15,14,13,13,22,25,26,29,31,34,37,40,41,42,44,42,42,40,36,31,27,22,17,15,15,14,14,14,20,23,28,27,29,32,38,41,42,42,43,43,46,42,37,35,32,26,23,19,17,13,14,14,20,23,28,27,29,32,37,40,41,43,43,44,46,42,38,36,32,26,25,21,19,14,13,14],
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
