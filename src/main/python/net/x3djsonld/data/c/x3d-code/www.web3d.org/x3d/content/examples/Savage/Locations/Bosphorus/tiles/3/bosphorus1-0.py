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
    GeoViewpoint(description='GeoViewpoint_3_10',geoSystem=['GDC'],position=(41.280922627855375,28.585863182492176,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.280922627855375,28.585863182492176,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus2-0.x3d'],child2Url=['../../tiles/4/bosphorus3-0.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[18,49,84,126,114,73,114,25,48,2,1,25,106,194,170,75,115,88,29,4,25,1,187,178,129,83,76,86,9,9,1,0,15,46,106,180,124,125,149,89,17,72,91,47,190,151,157,163,95,21,3,7,9,15,56,109,91,179,152,169,49,65,93,126,2,0,141,86,177,170,36,30,3,6,18,27,76,95,169,151,110,53,115,144,89,22,75,107,167,197,159,67,32,6,4,3,43,29,26,88,66,148,72,156,87,11,39,88,97,18,220,86,30,17,16,9,4,44,110,66,112,65,121,118,142,108,23,37,98,153,134,105,59,20,38,49,36,33,6,10,38,68,139,155,103,135,86,18,53,108,57,94,70,106,36,24,72,113,74,46,26,85,41,139,123,123,163,120,23,63,128,131,82,124,154,154,84,48,56,67,48,31,38,28,107,102,166,150,128,114,30,49,98,74,101,111,84,75,116,193,134,161,58,43,119,61,54,95,125,156,86,87,130,49,129,105,148,107,81,95,219,234,154,100,49,95,93,139,128,128,171,158,144,60,94,60,109,144,130,113,134,113,113,96,120,80,101,78,61,125,117,60,30,28,117,121,86,60,74,38,107,121,33,16,67,65,103,103,57,24,29,69,14,29,4,16,14,34,95,14,5,60,37,47,33,49,76,35,66,71,128,83,41,0,3,1,31,68,63,6,20,15,15,68,71,29,0,6,50,15,13,64,45,53,66,47,6,1,2,11,4,4,5,46,0,7,0,0,0,0,10,12,53,61,15,82,12,2,-2,4,9,-3,0,0,0,0,0,0,1,5,2,0,8,5,3,3,9,8,47,10,0,0,0,0,-2,0,-1,2,-1,0,1,-1,0,0,42,51,51,0,0,0,0,0,0,0,0,0,-2,-1,-4,0,-1,0,0,-2,0,-1,0,2,-2,0,0,0,2,0,0,0,0,-1,0,-1,-5,0,0,0,-1,0,0,0,1,0,0,0,0,0,0,1,0,-2,0,-1,0,0,0,-1,0,0,-2,0,0,1,0,0,0,0,0,0,0,0,1,-1,1,0,0,0,0,-1,0,0,-1,-1,0,0],
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
