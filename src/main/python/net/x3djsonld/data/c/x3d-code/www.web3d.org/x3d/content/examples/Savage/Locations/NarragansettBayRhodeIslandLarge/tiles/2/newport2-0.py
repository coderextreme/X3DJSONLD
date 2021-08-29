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
    GeoLOD(center=(41.59730027025994,-71.70327943062637,0.0),range=24602.27,child1Url=['../../tiles/3/newport4-0.x3d'],child2Url=['../../tiles/3/newport4-1.x3d'],child3Url=['../../tiles/3/newport5-0.x3d'],child4Url=['../../tiles/3/newport5-1.x3d'],
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.5,-71.5,0),geoSystem=['GDC']),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/newport2-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.500539965587954,-71.7912208468,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.008375373,zDimension=22,zSpacing=0.009215267,height=[101,122,70,71,45,38,83,83,40,27,29,55,60,33,35,33,55,78,47,40,48,58,112,101,110,101,77,65,111,90,59,22,45,44,61,49,68,41,51,42,48,72,101,80,106,112,92,112,83,83,110,72,31,46,24,40,37,58,51,71,65,50,90,91,95,92,100,102,111,100,74,66,62,39,47,40,44,41,40,38,66,92,84,82,103,83,71,70,123,121,117,101,101,58,62,70,87,56,49,38,56,88,104,107,122,90,99,83,99,114,126,124,114,110,70,79,115,97,88,46,61,50,67,94,130,143,121,84,113,115,114,131,126,120,139,73,106,125,94,86,55,47,49,73,80,97,140,147,92,95,136,133,115,114,144,146,98,103,93,84,85,52,51,42,117,101,90,78,133,154,119,106,157,148,106,106,89,89,113,113,93,69,66,63,43,53,122,109,104,87,135,142,152,111,156,159,122,113,89,125,133,107,86,87,131,83,45,68,78,141,121,105,127,138,168,130,121,169,155,126,131,142,145,103,129,99,50,56,61,68,79,97,119,149,114,142,179,160,116,108,120,126,129,125,112,132,128,61,57,80,53,91,93,105,149,156,137,133,156,162,133,118,101,116,129,145,176,141,81,82,110,60,59,98,129,93,130,134,145,134,126,146,148,104,105,115,138,106,95,113,86,121,116,74,76,69,128,136,116,136,187,141,121,129,137,105,88,107,98,104,119,109,136,156,106,146,74,82,129,153,124,135,146,130,107,109,106,102,93,91,99,110,111,112,146,132,150,135,99,157,163,159,178,145,125,115,119,123,152,114,83,77,103,107,106,117,126,148,140,156,126,176,181,154,162,134,128,165,131,136,126,109,79,79,104,120,127,120,148,138,148,136,131,157,169,187,173,134,150,182,137,122,121,85,82,120,109,119,128,118,121,132,148,137,146,155,183,177,163,174,159,164,127,118,90,84,79,79,131,143,109,110,132,143,161,164,147,155,153,152,146,144,173,153,136,124,97,105,92,85,114,113,108,108,152,134,131,137,134,151,157,162,170,145,157,133,109,96,107,121,92,78,115,113,107,108,151,133,131,138,134,151,155,163,169,145,157,132,109,95,107,121,90,78],
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
