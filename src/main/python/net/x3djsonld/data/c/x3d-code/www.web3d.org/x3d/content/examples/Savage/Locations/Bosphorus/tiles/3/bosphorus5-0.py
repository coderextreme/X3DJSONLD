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
    GeoViewpoint(description='GeoViewpoint_3_50',geoSystem=['GDC'],position=(41.22625451557576,28.511681591246088,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.22625451557576,28.511681591246088,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus10-0.x3d'],child2Url=['../../tiles/4/bosphorus10-1.x3d'],child3Url=['../../tiles/4/bosphorus11-0.x3d'],child4Url=['../../tiles/4/bosphorus11-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus5-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.171586403296146,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[211,96,69,36,20,13,20,20,22,20,11,16,3,5,35,84,104,86,81,106,127,115,50,55,47,37,14,26,22,29,31,20,14,16,5,9,8,30,63,69,97,107,142,136,29,24,20,17,21,29,28,35,27,26,24,21,5,24,20,11,24,43,94,132,158,152,45,38,20,19,31,46,40,44,38,31,33,20,6,8,35,44,20,71,89,146,153,143,70,42,20,23,40,62,59,52,39,38,36,31,10,10,9,33,47,26,61,100,121,107,40,54,24,28,50,66,73,61,53,43,41,36,7,27,29,16,37,62,31,83,91,69,25,27,27,35,70,77,87,82,62,52,54,44,12,56,40,31,35,79,69,42,61,93,34,25,22,34,64,78,100,107,73,63,65,10,27,58,71,53,27,77,131,61,103,79,34,28,24,33,75,73,113,115,82,43,37,11,25,40,92,89,52,58,142,85,134,128,37,38,32,72,72,112,116,131,104,46,13,21,13,34,80,140,81,55,89,134,162,155,49,47,60,92,80,131,111,149,91,37,13,35,18,19,39,110,122,112,70,144,162,165,71,90,44,46,66,92,82,96,70,30,20,36,29,18,39,92,139,173,143,134,166,171,86,175,49,56,57,70,67,62,44,25,32,47,41,29,24,57,92,167,94,164,169,165,78,127,62,68,69,77,69,56,35,25,30,53,62,35,23,46,58,136,77,125,172,167,71,65,84,90,103,114,136,82,55,25,33,65,84,54,48,25,115,125,60,138,166,157,84,102,156,123,139,134,155,156,70,28,38,70,130,92,58,59,32,45,58,99,175,179,116,164,193,168,134,179,161,117,58,29,43,68,119,100,61,113,54,79,95,98,125,147,196,196,235,201,146,184,160,78,48,32,71,74,77,160,106,116,42,93,136,139,169,186,219,241,229,194,141,174,137,87,56,37,69,126,139,120,138,72,77,100,151,180,193,185,180,207,192,160,143,187,193,97,53,44,43,66,115,138,159,97,110,78,146,111,186,197,221,222,246,177,158,128,111,92,52,62,84,48,91,130,148,148,115,131,112,117,178,178,220,216,240,173,156,123,105,88,50,63,90,48,93,129,144,145,122,136,121,110,174,176],
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
