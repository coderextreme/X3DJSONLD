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
    GeoLOD(center=(41.52686794665262,-71.24923386681724,0.0),range=2150.0764,child1Url=['../../tiles/5/newport10-22.x3d'],child2Url=['../../tiles/5/newport10-23.x3d'],child3Url=['../../tiles/5/newport11-22.x3d'],child4Url=['../../tiles/5/newport11-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport5-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.51879708887511,-71.25730472459475,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=24,xSpacing=7.018137E-4,zDimension=24,zSpacing=7.018137E-4,height=[62,61,63,63,64,67,60,58,59,57,54,50,46,42,37,33,28,22,19,17,19,22,23,23,63,60,62,61,61,65,61,64,61,58,52,48,46,42,38,34,29,24,20,17,18,20,20,20,57,58,58,57,60,64,60,60,59,54,52,51,47,42,38,34,29,25,22,19,18,18,18,18,58,63,57,56,59,61,64,67,61,54,50,49,46,42,38,34,30,26,22,20,19,18,18,18,57,59,60,63,62,61,64,62,58,55,51,48,46,41,38,35,29,26,23,21,20,19,18,19,56,56,56,60,63,65,65,61,55,51,48,47,44,41,38,34,31,27,24,21,20,19,19,19,59,58,57,58,61,60,61,54,52,50,48,46,45,42,40,35,31,28,24,22,20,20,20,20,64,57,60,59,57,56,55,52,51,51,50,46,43,41,39,36,32,28,25,23,21,20,20,20,61,59,60,59,58,56,53,50,50,49,47,44,42,41,39,36,34,30,26,23,22,21,22,22,63,61,60,60,57,55,51,50,49,47,48,43,40,40,38,36,34,31,28,24,23,22,23,23,63,61,61,61,57,55,51,50,49,47,44,41,40,41,40,37,34,31,27,25,23,22,22,22,65,63,63,60,55,53,51,49,47,46,44,44,42,41,39,37,34,31,28,25,23,22,20,20,69,67,67,61,57,54,52,49,50,48,43,43,43,41,40,38,35,32,29,25,24,23,21,20,72,67,64,58,58,55,52,51,48,47,47,48,45,43,40,38,36,33,30,27,25,24,22,21,77,67,63,59,59,56,54,51,47,45,44,46,43,43,41,39,37,34,32,29,27,26,25,24,72,69,66,62,59,57,56,52,48,48,48,46,43,42,40,39,38,36,33,30,30,29,27,26,67,69,64,62,61,59,57,56,52,50,49,48,46,42,39,39,38,36,34,32,31,30,27,26,64,67,65,62,60,58,59,57,57,50,50,49,47,44,42,41,39,38,36,35,34,32,29,28,64,64,65,61,60,59,58,55,55,54,52,51,52,47,45,43,41,39,38,36,34,33,31,30,65,63,64,62,61,62,61,58,59,58,56,52,51,48,47,45,43,41,40,38,36,33,30,30,64,63,60,61,60,61,60,61,65,69,60,53,52,50,48,47,45,43,41,39,36,34,32,32,62,61,61,61,61,64,63,69,67,68,60,58,55,52,51,49,47,45,42,40,37,34,32,32,62,61,63,65,66,63,65,66,62,61,61,58,55,55,53,51,48,45,43,40,37,35,34,34,63,61,64,65,67,64,65,65,61,62,62,57,53,55,54,51,49,46,43,40,37,36,34,34],
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
