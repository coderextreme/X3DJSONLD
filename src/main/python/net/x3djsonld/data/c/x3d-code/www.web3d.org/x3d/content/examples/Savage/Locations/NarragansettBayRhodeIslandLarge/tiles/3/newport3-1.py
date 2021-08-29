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
    GeoLOD(center=(41.45215981325196,-71.65930872253955,0.0),range=12301.135,child1Url=['../../tiles/4/newport6-2.x3d'],child2Url=['../../tiles/4/newport6-3.x3d'],child3Url=['../../tiles/4/newport7-2.x3d'],child4Url=['../../tiles/4/newport7-3.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.70327943062637,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[15,19,20,16,32,34,37,21,22,16,18,29,28,37,34,27,26,23,32,34,38,38,23,40,29,35,45,37,31,16,16,18,20,20,21,31,28,27,30,45,50,60,46,55,53,51,52,52,52,42,29,20,18,16,24,35,32,43,29,23,37,46,49,50,45,51,52,66,66,51,42,28,16,16,16,18,31,39,42,34,27,27,33,39,46,53,50,48,45,48,51,41,17,16,16,16,16,16,38,53,48,34,27,27,27,27,31,34,38,36,40,25,35,46,26,16,16,16,16,17,28,40,47,38,39,27,29,31,32,36,37,40,53,23,29,17,14,16,16,16,16,22,20,28,39,42,40,26,27,27,33,34,40,42,36,16,14,15,16,15,21,22,21,23,21,20,52,52,38,31,26,26,29,31,40,45,18,16,15,17,18,21,19,35,43,26,20,25,51,54,49,34,29,30,28,39,49,55,21,20,20,16,13,22,25,21,56,43,41,36,50,57,40,28,36,33,34,34,58,63,25,24,24,16,21,20,30,24,43,40,57,60,46,56,32,35,36,35,31,27,63,71,23,24,23,20,24,21,22,16,25,29,39,50,41,24,24,25,34,27,31,29,31,35,26,26,23,21,23,24,18,23,33,31,28,27,23,23,33,36,38,26,38,38,31,29,25,26,28,21,28,30,26,20,33,27,24,29,18,28,67,70,57,33,36,57,30,28,26,27,24,25,27,32,37,15,13,26,23,23,28,21,68,78,54,41,30,54,32,32,28,31,33,22,31,37,41,23,19,22,25,24,40,37,61,80,53,33,29,47,33,30,29,47,43,25,24,43,44,28,21,26,31,25,58,58,46,68,33,29,30,36,33,31,25,42,46,30,26,44,51,30,27,25,25,37,65,54,37,44,46,37,33,31,32,33,20,44,49,35,28,31,31,28,23,24,34,55,71,61,41,45,38,57,35,33,33,32,25,34,62,56,49,27,27,28,23,28,40,50,58,48,41,49,46,44,33,38,35,35,29,44,75,63,47,40,28,34,33,29,42,44,43,43,52,69,46,35,34,38,42,41,27,44,75,63,48,40,27,34,34,29,42,45,43,43,55,70,45,35,34,38,42,42],
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
