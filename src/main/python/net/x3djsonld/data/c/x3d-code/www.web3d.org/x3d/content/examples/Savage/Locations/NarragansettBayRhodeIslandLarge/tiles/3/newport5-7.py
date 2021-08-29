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
    GeoLOD(center=(41.64568042259594,-71.13166022549774,0.0),range=12301.135,child1Url=['../../tiles/4/newport10-14.x3d'],child2Url=['../../tiles/4/newport10-15.x3d'],child3Url=['../../tiles/4/newport11-14.x3d'],child4Url=['../../tiles/4/newport11-15.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/newport5-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.17563093358456,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0041876864,zDimension=22,zSpacing=0.0046076337,height=[29,33,43,52,38,25,25,30,24,33,28,38,37,40,46,60,57,57,47,49,45,39,39,45,48,49,33,27,25,25,37,35,36,42,38,43,45,52,59,54,46,47,37,39,34,37,45,44,28,26,25,25,43,35,43,49,44,47,54,54,56,53,47,44,43,38,38,34,38,37,30,26,26,30,40,39,42,53,53,47,50,58,59,51,56,44,42,35,43,34,45,41,37,35,35,38,42,42,42,51,50,47,54,63,63,63,62,50,43,38,38,36,57,45,50,53,41,48,44,41,41,53,47,46,58,68,63,69,61,50,42,42,37,37,66,53,63,71,54,54,43,41,41,45,46,46,66,69,68,59,51,44,40,41,43,45,64,56,65,71,75,58,47,41,41,44,46,56,68,70,65,52,43,43,38,37,44,50,60,59,68,79,79,68,51,41,41,43,46,65,67,69,56,54,50,45,43,38,47,58,71,63,73,81,69,73,55,41,42,44,51,69,68,67,52,55,54,49,45,39,46,64,76,75,74,61,61,67,57,41,41,45,51,70,72,57,49,53,55,54,45,43,50,71,77,75,64,61,61,64,55,47,40,45,50,70,65,49,49,56,52,54,50,47,61,75,82,72,61,61,63,65,60,51,39,44,58,65,61,49,49,53,51,52,47,46,61,73,78,68,61,61,62,63,64,51,39,42,40,41,58,49,56,52,52,54,46,46,63,70,61,61,61,61,66,60,61,49,40,39,39,39,50,51,58,55,52,54,47,45,58,70,64,68,62,62,67,58,55,49,47,39,39,44,47,46,58,55,59,49,48,46,60,52,62,60,70,73,67,58,56,52,49,39,39,44,48,42,56,55,57,47,40,40,52,52,53,56,60,68,67,58,66,60,41,39,39,52,51,40,60,56,46,45,40,40,58,54,51,57,55,61,59,48,65,44,39,39,39,39,39,39,60,50,40,43,40,40,54,54,54,55,53,52,47,44,44,39,39,39,39,39,39,41,59,44,41,40,46,49,54,54,55,55,57,64,59,47,41,39,39,39,39,39,39,42,43,41,42,46,57,56,54,54,55,55,57,64,59,47,40,39,39,39,39,39,39,42,43,41,42,46,57,56],
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
