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
    GeoLOD(center=(41.669870498763935,-71.63732336849614,0.0),range=6150.5674,child1Url=['../../tiles/5/newport22-6.x3d'],child2Url=['../../tiles/5/newport22-7.x3d'],child3Url=['../../tiles/5/newport23-6.x3d'],child4Url=['../../tiles/5/newport23-7.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/4/newport11-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.64568042259594,-71.65930872253955,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0020938432,zDimension=22,zSpacing=0.0023038168,height=[112,109,108,104,103,107,107,109,110,110,118,110,108,103,101,100,105,93,84,77,87,92,106,105,108,106,107,107,112,114,118,119,122,124,113,113,110,101,97,91,90,76,80,80,111,107,110,108,111,111,117,116,116,131,140,140,143,136,119,113,99,94,86,82,76,75,111,116,112,111,114,122,120,119,130,139,144,151,154,152,143,116,101,95,89,88,76,75,122,120,121,126,131,123,119,123,138,142,146,146,154,146,136,116,101,99,95,88,78,76,134,127,127,138,138,135,124,129,139,148,151,148,137,130,118,108,99,93,85,82,78,78,144,136,132,135,139,138,134,134,139,149,149,144,133,123,114,104,101,104,99,85,82,82,155,144,133,134,139,136,133,138,139,141,137,132,130,124,113,105,99,91,93,81,82,81,160,145,134,133,134,130,131,136,138,138,135,126,120,113,113,108,103,87,81,79,80,78,162,147,142,135,131,133,129,131,133,143,143,133,122,116,112,103,89,88,77,76,76,77,166,156,144,139,134,128,127,128,133,145,142,131,121,114,108,96,84,88,77,78,80,86,173,160,149,141,130,125,120,123,132,138,142,131,113,110,99,86,83,79,77,76,101,108,174,163,151,137,127,125,122,123,134,136,133,120,109,96,87,85,90,79,78,82,114,117,167,155,146,137,123,119,125,128,132,132,124,114,99,93,80,81,80,78,77,91,112,113,162,153,140,131,126,121,125,131,129,128,120,100,88,83,83,79,75,76,76,88,85,84,161,146,136,124,122,123,123,129,126,116,99,89,88,86,93,84,82,84,81,75,81,81,155,143,134,131,125,118,121,119,108,93,86,89,82,87,87,84,87,94,90,80,75,77,154,140,135,132,132,120,112,106,94,88,82,80,79,80,79,85,93,96,89,77,75,75,148,140,136,133,127,123,121,111,99,88,86,85,86,85,89,92,92,94,87,77,79,81,146,142,138,130,133,133,135,124,101,97,98,93,90,86,87,98,110,111,89,77,88,86,150,149,140,137,139,151,144,128,110,98,100,101,99,97,103,105,120,103,97,92,85,85,152,150,140,137,140,152,144,130,112,98,100,103,101,99,105,106,121,102,97,93,85,84],
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
