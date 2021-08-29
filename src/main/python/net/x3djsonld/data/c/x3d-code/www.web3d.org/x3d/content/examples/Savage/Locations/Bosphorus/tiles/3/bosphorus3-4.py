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
    GeoViewpoint(description='GeoViewpoint_3_34',geoSystem=['GDC'],position=(41.0075820664573,29.10513432121479,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.0075820664573,29.10513432121479,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus6-8.x3d'],child2Url=['../../tiles/4/bosphorus6-9.x3d'],child3Url=['../../tiles/4/bosphorus7-8.x3d'],child4Url=['../../tiles/4/bosphorus7-9.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus3-4.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.95291395417769,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,0,0,0,0,-1,-2,0,0,-3,-2,1,15,43,30,66,78,120,207,318,337,311,0,-2,0,-1,0,0,0,2,-1,0,14,23,33,48,38,59,98,112,190,238,324,291,1,2,0,0,-1,-4,-2,-4,0,5,28,31,36,68,60,80,141,242,187,226,267,261,-1,1,0,0,-5,0,5,15,19,22,14,26,60,55,90,105,115,197,253,232,204,207,-1,0,0,-9,1,6,17,35,37,38,43,46,34,79,79,142,231,281,267,276,265,244,-1,2,7,3,16,23,37,40,54,50,61,77,75,55,105,139,157,198,307,396,327,316,-1,0,18,26,34,35,42,51,69,66,68,82,92,81,85,98,138,182,315,283,226,218,1,2,24,43,45,52,54,60,67,72,72,83,97,106,119,132,150,147,197,198,186,193,32,5,27,40,40,56,45,42,62,69,77,64,91,106,118,128,134,136,163,184,165,167,21,6,21,35,41,60,25,28,47,76,46,70,100,113,103,107,104,118,137,168,153,150,30,23,10,21,21,13,27,49,29,45,50,84,79,94,78,114,117,133,143,154,153,143,7,45,53,22,29,46,62,54,45,42,68,75,65,90,85,101,117,146,140,139,139,141,21,21,70,65,56,81,87,77,58,76,56,48,69,107,117,127,132,139,153,139,141,132,38,48,55,96,84,130,136,98,84,72,94,79,104,121,125,144,133,135,192,143,127,128,83,71,90,102,146,218,146,118,108,104,106,111,125,129,157,159,136,133,144,154,141,129,70,97,109,109,145,176,159,145,131,143,142,142,146,157,154,143,148,128,138,153,138,131,78,106,96,109,107,222,209,176,148,148,139,134,135,153,145,164,122,121,134,127,114,117,80,97,86,72,109,176,198,159,121,136,136,118,122,126,138,120,128,135,133,111,133,141,5,53,37,71,125,143,156,130,116,113,139,122,117,160,149,94,116,102,137,143,147,147,3,56,14,64,126,80,104,116,120,123,123,115,115,151,159,85,200,156,179,164,168,174,5,47,0,4,39,85,117,94,68,131,140,87,135,119,124,99,152,158,173,186,198,200,7,34,-1,1,29,80,122,88,68,128,137,89,130,117,122,100,145,166,165,185,202,200],
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
