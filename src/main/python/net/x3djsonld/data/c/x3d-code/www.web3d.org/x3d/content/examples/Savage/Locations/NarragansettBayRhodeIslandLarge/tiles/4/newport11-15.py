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
    GeoLOD(center=(41.669870498763935,-71.10967487145433,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-30.x3d'],child2Url=['../../tiles/5/newport22-31.x3d'],child3Url=['../../tiles/5/newport23-30.x3d'],child4Url=['../../tiles/5/newport23-31.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-15.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.13166022549774,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[40,40,43,46,50,55,66,71,73,66,58,50,49,48,52,59,55,54,52,56,48,48,40,40,46,45,44,55,67,71,68,62,53,49,48,49,55,56,53,51,53,55,51,50,41,39,41,45,52,61,71,71,66,61,52,49,49,49,56,53,52,51,53,54,53,51,40,39,39,47,56,64,69,68,66,60,49,49,49,51,54,52,52,52,51,54,51,49,40,39,41,49,54,56,57,61,64,56,49,49,49,56,54,52,52,51,51,52,47,47,40,39,42,48,45,43,45,50,60,56,49,49,52,56,53,52,52,51,51,51,47,47,40,39,39,40,39,39,39,44,55,51,49,49,56,58,54,52,52,52,54,51,47,46,41,39,39,39,39,39,39,44,55,47,55,54,56,59,55,53,52,52,55,49,46,47,41,41,39,39,39,39,39,44,49,46,47,50,57,60,58,52,52,55,56,46,47,46,45,42,39,39,39,39,39,52,46,46,46,46,56,57,55,54,58,60,53,50,46,46,52,42,39,39,39,39,41,53,48,46,46,48,57,59,56,55,58,59,50,48,48,48,53,42,39,39,39,39,42,48,46,47,45,47,56,59,56,56,60,55,47,45,47,45,50,39,39,39,39,39,41,51,51,47,41,43,56,56,55,55,54,47,48,46,41,40,47,39,39,39,39,39,44,55,54,45,40,43,57,56,56,54,49,45,44,42,40,40,42,39,39,39,39,39,44,56,53,41,39,47,61,58,56,51,45,42,41,46,40,40,40,39,39,39,39,39,40,46,42,39,39,50,59,57,54,48,40,40,43,45,41,41,39,39,39,39,39,39,39,39,39,39,39,49,60,55,51,41,40,41,41,44,40,40,39,39,39,39,39,39,39,39,39,39,39,51,63,55,49,40,40,40,40,40,43,43,39,39,39,39,39,39,39,39,39,39,39,55,60,48,45,40,40,40,40,47,48,49,39,39,39,39,39,39,39,39,39,39,39,54,49,43,43,40,40,40,44,48,53,53,39,39,39,39,39,39,39,39,39,39,40,43,43,44,42,43,42,42,44,51,57,58,39,39,39,39,39,39,39,39,39,39,41,43,43,43,42,44,42,42,44,52,58,58],
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
