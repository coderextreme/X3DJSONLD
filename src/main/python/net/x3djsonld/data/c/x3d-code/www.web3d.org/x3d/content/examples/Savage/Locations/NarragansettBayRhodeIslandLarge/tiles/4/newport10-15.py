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
    GeoLOD(center=(41.62149034642794,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport20-30.x3d'],child2Url=['../../tiles/5/newport20-31.x3d'],child3Url=['../../tiles/5/newport21-30.x3d'],child4Url=['../../tiles/5/newport21-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport10-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.59730027025994,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[27,34,37,39,37,38,39,42,44,51,60,56,57,60,58,53,48,46,50,47,43,42,33,37,41,40,37,39,44,43,44,52,53,52,58,60,56,52,46,50,48,44,39,37,36,42,44,40,38,41,45,44,45,57,52,52,56,57,55,51,46,52,48,42,37,37,40,46,48,44,43,44,44,45,47,54,52,54,57,55,53,47,46,49,45,38,40,41,41,47,49,47,45,47,47,45,51,52,53,57,56,55,53,48,50,50,45,41,45,43,41,47,51,53,51,50,48,45,50,52,55,59,57,57,50,50,52,51,44,43,43,41,41,46,51,56,54,50,48,46,49,54,59,60,61,59,53,55,57,55,47,48,45,43,41,43,50,56,56,49,48,48,49,59,62,61,62,60,58,62,61,57,51,49,45,43,41,43,47,57,52,47,46,47,52,63,64,62,63,59,61,67,64,57,50,51,46,44,41,43,50,56,50,46,46,46,55,63,65,65,62,61,67,67,63,58,52,49,45,42,41,41,48,55,47,46,46,47,58,63,65,69,65,66,69,66,62,55,51,46,40,40,41,41,44,50,45,46,46,50,62,63,66,68,67,68,64,61,56,52,46,44,43,43,41,41,44,47,48,46,46,56,66,66,68,69,69,64,56,57,52,47,44,41,41,42,41,42,45,45,50,47,47,62,67,68,69,69,66,59,52,53,46,44,43,41,40,40,41,43,44,43,43,47,52,64,67,69,70,70,65,58,54,51,45,46,44,42,40,39,41,41,43,43,44,48,58,66,68,67,67,69,64,55,53,50,48,50,46,42,40,40,41,42,43,44,45,50,65,69,68,67,67,69,59,55,55,52,53,51,46,44,44,44,42,42,43,44,48,56,66,71,68,67,68,64,52,55,55,53,55,49,48,46,46,45,42,43,43,45,50,56,67,72,70,68,67,60,54,53,54,55,55,51,51,49,47,45,42,43,44,46,50,56,66,72,72,68,63,55,49,49,49,60,57,55,53,55,47,44,40,40,43,46,50,55,66,71,73,66,59,49,48,48,51,60,55,54,52,57,47,48,40,40,43,46,50,55,66,71,73,66,58,50,49,48,52,59,55,54,52,56,48,48],
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
