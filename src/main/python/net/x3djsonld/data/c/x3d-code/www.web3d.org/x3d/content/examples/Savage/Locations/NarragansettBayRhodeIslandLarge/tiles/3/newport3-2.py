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
    GeoLOD(center=(41.45215981325196,-71.57136730636591,0.0),range=12301.135,child1Url=['../../tiles/4/newport6-4.x3d'],child2Url=['../../tiles/4/newport6-5.x3d'],child3Url=['../../tiles/4/newport7-4.x3d'],child4Url=['../../tiles/4/newport7-5.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport3-2.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.403779660915966,-71.61533801445273,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[38,24,21,21,18,21,30,31,27,20,17,21,22,21,16,15,15,2,0,7,13,14,55,48,47,28,20,33,44,46,37,31,30,29,29,34,32,20,33,18,12,15,16,14,51,57,37,36,43,39,53,60,62,53,43,51,43,43,34,45,34,20,26,20,20,21,48,43,49,41,43,54,61,75,73,64,69,64,56,44,26,51,49,26,39,30,24,23,36,40,37,37,40,41,45,51,65,64,61,50,55,57,40,28,28,40,44,33,30,33,40,41,49,44,40,42,37,38,41,41,40,37,38,41,28,38,39,45,38,40,42,42,42,43,53,61,47,36,39,38,35,36,46,38,34,35,36,28,40,42,38,38,39,37,45,58,56,59,43,34,33,34,32,31,29,24,33,35,36,37,37,35,37,33,36,36,55,59,62,54,47,40,33,26,26,26,26,26,27,30,29,34,36,28,32,38,42,37,63,73,63,51,43,34,26,26,26,26,26,26,26,32,35,32,29,37,32,37,37,37,71,66,55,35,29,28,26,26,26,26,26,26,26,33,51,39,44,40,46,51,42,40,35,40,34,31,30,31,39,26,33,26,26,26,26,26,50,41,42,44,48,55,55,57,29,29,30,29,26,41,58,32,34,31,32,34,32,30,50,41,43,43,55,45,50,51,28,27,31,32,29,35,39,31,34,35,32,30,30,31,29,32,32,39,48,42,47,45,32,29,29,31,33,26,39,35,32,32,33,31,27,30,30,29,31,45,58,56,46,48,30,28,33,33,33,28,38,32,31,32,32,31,30,30,29,29,32,53,77,72,65,64,31,31,33,32,31,33,31,30,31,35,39,30,34,28,28,31,29,31,55,62,60,59,33,34,35,33,30,32,31,32,31,31,44,31,30,29,29,29,28,28,28,47,58,60,32,34,34,32,32,33,35,35,30,29,32,30,30,30,29,30,30,28,28,38,53,61,35,34,36,30,35,54,42,54,40,41,31,33,32,31,31,28,30,27,31,34,57,61,41,32,34,36,43,81,66,69,59,38,31,33,33,32,32,33,29,30,33,31,53,57,42,34,34,38,43,81,67,69,59,37,31,33,33,32,33,33,28,30,33,32,53,57],
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
