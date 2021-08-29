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
    GeoLOD(center=(41.573110194091946,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport18-22.x3d'],child2Url=['../../tiles/5/newport18-23.x3d'],child3Url=['../../tiles/5/newport19-22.x3d'],child4Url=['../../tiles/5/newport19-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport9-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.54892011792395,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[20,17,14,24,37,47,51,51,48,45,44,51,52,57,53,54,59,69,82,85,82,82,2,10,19,26,39,48,51,52,49,47,47,50,53,57,53,53,60,68,75,83,93,90,0,12,21,30,47,55,50,46,50,46,54,56,57,58,54,58,55,61,72,77,84,84,0,11,20,31,49,52,47,46,51,50,52,56,58,48,56,56,55,63,72,77,83,83,14,19,28,28,40,49,48,46,53,51,56,53,56,59,59,49,61,64,72,79,82,81,15,28,31,30,35,48,45,46,47,57,50,53,59,63,60,50,55,65,69,81,81,80,0,16,20,25,26,40,47,43,41,49,49,52,56,60,52,48,56,61,60,68,78,78,0,0,11,15,27,37,40,37,34,39,45,51,58,54,48,48,56,53,53,53,69,68,0,0,8,24,31,40,38,25,30,39,46,63,60,61,49,48,57,53,53,53,58,61,0,0,0,21,33,40,29,17,27,41,53,56,59,56,59,58,59,53,53,53,65,68,0,0,0,2,19,26,23,16,27,42,50,49,48,42,53,61,58,61,59,71,69,69,0,0,0,0,9,23,22,16,23,40,42,56,40,32,39,48,51,58,64,71,72,73,0,0,0,0,0,9,5,15,20,33,41,50,43,32,32,32,41,54,59,65,70,72,0,0,0,0,0,0,6,8,19,30,44,42,38,25,32,32,35,39,47,53,64,66,0,0,0,0,0,0,0,5,17,30,32,32,29,35,34,32,44,42,45,48,56,61,0,0,0,0,0,0,0,0,4,16,21,18,34,46,49,53,54,53,52,49,61,58,0,0,0,0,0,0,0,0,0,0,2,16,36,56,57,55,61,65,58,55,58,64,0,0,0,0,0,0,0,0,0,0,0,0,31,47,57,55,59,66,63,63,65,65,0,0,0,0,0,0,0,0,0,0,0,0,16,45,61,55,54,59,63,66,71,72,0,0,0,0,0,7,0,0,0,0,0,0,13,40,50,55,51,44,55,63,70,69,0,0,0,0,5,5,0,0,0,0,0,0,4,28,50,49,44,40,51,59,63,67,0,0,0,0,5,3,0,0,0,0,0,2,5,26,49,50,45,40,50,59,63,68],
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
