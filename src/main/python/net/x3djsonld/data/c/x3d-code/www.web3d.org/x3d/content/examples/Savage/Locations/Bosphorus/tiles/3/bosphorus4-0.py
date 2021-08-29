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
    GeoViewpoint(description='GeoViewpoint_3_40',geoSystem=['GDC'],position=(41.11691829101653,28.511681591246088,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(41.11691829101653,28.511681591246088,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus8-0.x3d'],child2Url=['../../tiles/4/bosphorus8-1.x3d'],child3Url=['../../tiles/4/bosphorus9-0.x3d'],child4Url=['../../tiles/4/bosphorus9-1.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus4-0.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(41.06225017873692,28.4375,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[69,83,112,114,126,128,118,106,102,86,51,54,83,23,36,3,16,-13,1,-1,2,3,121,149,148,140,140,91,79,73,72,86,81,55,34,9,6,9,1,4,0,-4,4,4,184,164,154,114,91,86,68,61,49,49,72,104,19,8,12,-1,1,3,2,7,6,7,188,184,178,137,132,93,88,83,81,56,93,43,9,24,15,2,4,1,0,21,18,14,191,173,175,166,126,103,107,121,115,102,48,14,18,37,19,1,0,1,6,17,36,32,191,170,146,169,123,125,127,125,117,85,37,17,31,3,0,0,2,-2,19,25,64,68,165,156,134,144,151,154,147,135,92,55,19,37,3,3,-3,3,0,18,5,28,67,81,190,178,151,124,157,175,163,152,95,32,21,48,3,0,7,6,9,50,15,40,56,67,152,174,141,109,134,166,181,148,61,25,35,24,-9,0,7,1,6,25,32,19,46,47,98,123,128,109,126,163,160,135,56,26,48,14,-3,6,0,1,5,4,47,38,33,34,114,91,95,107,134,212,142,109,47,31,55,26,3,0,-2,7,7,5,37,57,61,69,139,108,87,115,168,209,170,73,36,52,36,7,3,4,6,15,16,4,25,48,74,83,123,103,84,138,219,200,145,47,51,62,13,5,3,3,10,19,31,5,26,58,85,102,116,105,111,135,142,184,57,50,70,66,6,5,3,2,18,39,43,11,29,65,95,110,120,131,165,139,69,110,53,68,71,48,9,5,2,4,9,29,56,26,8,40,76,91,155,183,223,204,173,78,81,73,56,8,6,5,3,5,2,13,40,42,23,12,43,45,225,259,280,184,90,69,33,13,8,8,5,5,4,2,3,20,50,72,44,23,18,19,282,306,224,186,73,44,12,9,8,7,7,5,4,4,23,42,46,92,66,42,54,48,245,242,187,91,95,40,11,9,9,12,8,9,5,8,41,45,50,72,88,69,83,78,241,165,95,57,49,13,11,14,14,15,15,8,4,10,45,79,103,75,75,100,102,96,222,104,71,37,21,13,20,19,20,19,11,15,3,5,35,86,106,87,78,105,125,114,211,96,69,36,20,13,20,20,22,20,11,16,3,5,35,84,104,86,81,106,127,115],
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
