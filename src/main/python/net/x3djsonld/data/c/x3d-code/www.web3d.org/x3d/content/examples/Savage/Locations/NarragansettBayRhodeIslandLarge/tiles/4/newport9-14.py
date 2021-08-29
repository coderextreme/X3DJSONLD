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
    GeoLOD(center=(41.573110194091946,-71.15364557954115,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-28.x3d'],child2Url=['../../tiles/5/newport18-29.x3d'],child3Url=['../../tiles/5/newport19-28.x3d'],child4Url=['../../tiles/5/newport19-29.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-14.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[14,14,14,14,14,25,30,32,36,42,43,34,29,27,18,18,18,16,20,19,20,21,14,14,14,14,15,28,30,31,32,37,37,39,30,19,18,18,19,20,23,22,21,21,14,14,14,14,22,28,31,31,32,40,38,32,21,18,18,19,22,24,30,27,22,22,16,20,16,18,24,30,36,38,37,35,35,25,20,19,20,20,24,32,27,24,27,31,16,19,19,21,27,34,37,35,33,31,27,25,21,20,22,25,30,29,29,31,38,40,20,21,22,25,30,35,35,30,26,27,26,23,22,21,23,28,33,32,34,39,46,47,24,23,23,25,28,31,27,25,25,27,29,23,22,22,24,33,37,36,41,47,44,42,27,27,26,28,25,25,25,25,25,30,33,23,23,23,30,40,37,40,48,48,32,29,28,29,29,30,25,25,25,25,26,36,31,28,25,26,39,43,42,45,49,34,25,23,29,31,32,29,26,25,25,26,31,37,37,33,26,37,46,45,49,53,39,16,14,13,27,30,29,24,25,25,25,30,32,40,39,32,34,45,52,49,55,49,24,13,12,12,28,32,26,24,25,25,26,32,35,37,35,36,42,54,48,53,53,33,16,14,12,12,28,27,24,26,25,26,33,39,37,37,36,39,51,55,47,53,41,17,15,15,13,13,21,22,24,26,25,26,40,46,41,40,41,38,53,44,47,40,26,16,16,18,17,17,23,23,29,32,30,37,48,52,47,47,45,44,38,31,37,34,20,19,22,23,17,17,22,23,28,33,39,44,54,56,54,49,44,36,27,30,31,25,25,30,34,20,19,19,20,20,22,30,41,52,59,57,54,51,45,30,25,28,28,26,33,32,32,22,21,21,21,21,25,35,43,56,59,55,52,48,39,27,25,30,25,28,31,34,28,23,23,23,20,23,26,32,42,54,55,53,49,44,32,25,25,25,25,30,32,30,25,24,22,21,28,22,25,34,42,49,49,49,43,35,27,25,25,25,26,32,28,24,24,28,23,23,38,31,30,41,41,45,53,49,43,34,28,25,25,25,27,26,25,25,32,32,25,27,42,32,31,42,40,45,53,49,43,34,27,25,25,25,27,25,25,26,33,32,26,27],
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
