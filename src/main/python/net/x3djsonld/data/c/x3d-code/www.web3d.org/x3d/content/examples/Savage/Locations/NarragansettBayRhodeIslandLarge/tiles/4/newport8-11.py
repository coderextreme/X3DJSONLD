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
    GeoLOD(center=(41.52473004175595,-71.2855577038016,0.0),range=6150.5674,child1Url=['../../tiles/5/newport16-22.x3d'],child2Url=['../../tiles/5/newport16-23.x3d'],child3Url=['../../tiles/5/newport17-22.x3d'],child4Url=['../../tiles/5/newport17-23.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport8-11.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.30754305784501,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[23,27,28,27,17,0,0,0,0,0,0,0,2,8,13,24,32,29,24,5,0,0,16,21,20,19,10,0,0,0,0,0,0,0,9,15,21,30,38,36,24,6,2,2,11,17,12,9,3,0,0,0,0,0,0,1,9,19,22,34,40,36,25,7,6,9,16,18,17,11,7,5,8,6,1,0,0,10,14,23,27,35,42,38,23,12,13,12,23,22,20,14,16,14,19,14,2,1,2,16,24,24,32,37,42,37,25,17,22,21,20,28,26,23,22,22,25,22,6,2,8,19,32,40,44,40,42,34,27,21,26,26,15,26,29,33,34,33,36,31,10,3,15,26,37,48,51,50,44,39,30,27,30,31,24,27,31,39,44,43,42,29,8,5,15,33,45,52,55,53,46,41,34,34,35,38,32,29,32,39,49,46,35,15,5,8,17,38,53,57,58,55,50,46,36,33,38,41,40,31,37,41,52,42,20,9,7,12,20,38,49,58,59,53,50,43,36,35,40,42,38,39,40,45,45,35,17,8,14,19,22,35,47,57,56,56,54,47,36,38,42,43,29,33,34,40,38,29,15,16,23,25,34,42,48,59,65,64,59,46,45,43,45,46,13,18,30,31,35,23,18,20,28,34,42,48,53,53,62,64,58,52,50,43,47,51,11,18,27,32,28,24,18,23,30,36,46,50,50,52,57,61,62,59,47,46,56,55,7,17,30,37,30,27,25,23,33,44,49,52,51,51,57,72,63,59,54,49,56,55,15,24,35,35,26,25,24,27,35,42,50,51,49,51,58,60,55,59,53,53,53,56,16,26,30,33,36,32,29,31,34,43,49,48,47,51,54,54,62,54,50,52,52,54,28,31,27,28,27,27,36,37,37,41,44,44,46,49,52,54,57,58,51,55,53,55,34,33,23,22,30,39,43,44,40,37,39,44,51,54,54,54,61,64,63,62,61,60,34,31,22,24,35,48,46,49,44,39,40,43,49,58,56,55,61,67,75,75,70,71,24,17,14,24,37,48,53,51,48,42,43,51,52,56,54,55,59,68,81,84,80,80,20,17,14,24,37,47,51,51,48,45,44,51,52,57,53,54,59,69,82,85,82,82],
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
