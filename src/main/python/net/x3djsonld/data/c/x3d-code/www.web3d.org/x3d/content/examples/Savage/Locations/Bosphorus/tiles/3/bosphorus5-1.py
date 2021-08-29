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
    GeoViewpoint(description='GeoViewpoint_3_51',geoSystem=['GDC'],position=(41.22625451557576,28.660044773738264,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,28.660044773738264,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-2.x3d'],child2Url=['../../tiles/4/bosphorus10-3.x3d'],child3Url=['../../tiles/4/bosphorus11-2.x3d'],child4Url=['../../tiles/4/bosphorus11-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.585863182492176,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[115,72,83,131,150,122,79,125,115,73,57,14,45,82,53,112,129,119,139,84,80,92,136,105,101,151,145,99,112,139,85,33,20,27,59,86,62,99,127,91,106,113,63,31,152,138,132,144,99,104,123,148,90,65,20,37,74,92,80,100,91,68,64,43,93,128,143,160,144,115,102,122,143,121,88,38,15,29,67,100,96,80,76,52,99,100,133,130,107,158,139,103,133,117,103,77,47,33,14,42,67,130,97,70,57,82,57,104,76,119,69,154,128,98,126,116,60,34,26,24,33,43,82,125,95,67,71,61,94,89,145,139,93,138,144,109,143,106,58,54,30,20,35,46,87,113,80,60,88,64,94,96,105,122,79,132,125,122,155,119,105,54,20,31,32,79,105,97,101,67,95,79,111,105,132,137,128,145,114,140,163,109,119,57,23,74,74,88,131,131,127,101,121,83,110,137,144,144,155,137,135,154,167,90,66,48,25,108,112,67,147,130,103,68,93,136,94,128,153,142,165,138,147,175,133,123,41,38,25,118,112,121,119,131,102,64,80,127,111,139,135,112,171,141,153,184,98,60,73,110,27,42,110,107,136,100,98,76,75,133,132,137,90,92,165,148,163,168,103,62,127,73,44,33,40,61,114,88,74,82,84,124,100,132,79,73,167,141,158,148,76,87,101,38,74,42,41,90,105,103,73,112,92,148,107,88,70,72,157,157,153,128,112,92,80,42,108,46,60,79,145,113,82,136,118,130,133,88,75,84,179,167,150,124,79,121,94,59,111,42,89,124,111,89,99,134,171,126,104,88,78,98,147,172,162,128,75,118,56,90,110,48,56,80,140,120,130,169,135,117,99,92,82,94,186,174,167,119,96,91,73,75,110,51,98,120,142,127,107,162,116,110,104,84,98,93,185,173,166,107,115,110,57,81,118,71,83,70,100,127,122,157,154,128,97,108,131,119,197,187,162,115,149,103,54,125,102,54,112,106,123,123,142,136,103,125,88,112,116,104,178,138,143,127,123,72,59,134,107,83,62,92,96,132,155,126,140,94,106,104,110,106,176,133,138,131,117,73,59,132,103,89,65,98,102,134,156,122,136,94,112,104,111,109],
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
