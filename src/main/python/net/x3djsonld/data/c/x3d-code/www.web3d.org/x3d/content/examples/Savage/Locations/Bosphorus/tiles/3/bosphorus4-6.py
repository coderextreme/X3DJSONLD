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
    GeoViewpoint(description='GeoViewpoint_3_46',geoSystem=['GDC'],position=(41.11691829101653,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-12.x3d'],child2Url=['../../tiles/4/bosphorus8-13.x3d'],child3Url=['../../tiles/4/bosphorus9-12.x3d'],child4Url=['../../tiles/4/bosphorus9-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[128,158,118,109,96,58,62,59,55,56,64,143,145,145,190,165,126,120,75,113,156,120,160,111,66,87,66,63,61,61,60,79,99,118,183,169,221,197,199,144,122,110,102,114,111,72,49,17,19,62,64,64,54,66,135,167,172,180,200,181,170,173,141,132,137,155,55,87,3,13,68,78,74,62,62,82,173,140,163,174,231,207,170,158,150,152,112,137,69,36,21,16,62,85,75,59,61,102,170,152,182,219,198,161,155,131,114,116,148,139,51,29,17,44,74,92,62,96,59,66,93,157,190,186,228,137,130,140,128,151,175,157,63,44,15,19,64,76,70,113,122,145,157,165,158,122,100,95,161,168,192,175,151,145,27,17,15,15,32,50,131,122,157,174,134,108,147,103,167,157,152,133,199,168,182,171,15,15,16,21,28,90,112,167,134,172,145,166,118,123,147,169,163,191,185,157,169,184,14,17,53,47,67,56,90,133,192,194,167,146,140,163,135,142,128,136,161,172,178,174,16,60,96,83,114,136,50,129,156,160,181,168,162,121,120,135,131,97,139,168,183,185,129,78,134,127,130,182,76,121,184,176,158,170,128,119,100,131,94,125,156,145,174,153,124,134,112,113,144,151,113,169,152,162,166,165,132,143,95,90,92,132,97,133,159,140,48,89,112,128,137,180,146,117,148,151,148,151,112,87,86,90,70,88,136,82,107,142,120,129,131,123,129,157,185,166,150,127,134,94,99,140,137,90,135,116,64,63,66,59,47,77,77,128,136,195,179,171,136,99,93,118,140,138,105,156,133,109,113,116,84,68,117,108,142,138,134,142,146,143,117,97,137,107,104,148,143,124,125,87,82,117,118,82,71,108,112,149,112,129,155,113,109,118,135,109,128,147,147,144,117,141,133,128,104,119,122,133,144,132,126,117,128,150,123,136,115,136,127,115,115,130,130,115,125,142,141,146,147,151,124,131,99,73,86,109,129,128,98,115,126,109,103,135,101,80,108,154,134,140,146,106,100,134,70,98,121,120,122,124,97,101,118,105,93,127,132,107,130,128,132,119,146,106,96,131,71,96,124,117,119,125,103,100,120,107,102,133,133,118,127,119,137,117],
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
