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
    GeoViewpoint(description='GeoViewpoint_3_16',geoSystem=['GDC'],position=(40.788909617338845,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.788909617338845,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus2-12.x3d'],child2Url=['../../tiles/4/bosphorus2-13.x3d'],child3Url=['../../tiles/4/bosphorus3-12.x3d'],child4Url=['../../tiles/4/bosphorus3-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus1-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.73424150505923,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,-1,0,0,3,0,1,1,0,1,0,1,1,3,0,2,0,0,1,0,0,0,0,-1,2,0,0,1,0,1,0,2,0,-2,1,1,0,1,1,0,0,-1,0,0,0,0,4,5,0,0,0,0,1,2,0,-3,3,0,0,1,0,0,0,-1,1,1,0,1,1,2,0,0,1,-3,2,4,-1,1,-1,0,0,1,0,0,0,0,0,0,0,-1,2,1,0,0,-1,0,0,3,-1,-3,0,-1,5,-2,2,-1,0,1,0,1,0,4,0,4,27,5,5,6,42,52,16,0,-2,-5,-2,-1,0,-1,0,0,2,0,0,0,-1,0,2,68,91,76,78,74,58,19,0,-4,2,1,10,3,0,0,17,12,0,0,0,-2,30,44,77,88,99,100,103,79,67,42,-1,-1,6,1,0,0,-3,-2,-1,0,4,-4,5,21,52,59,68,125,105,118,119,84,19,48,53,57,49,29,10,-2,0,0,0,-4,16,47,49,57,49,60,69,77,88,33,67,135,133,110,91,81,77,65,-1,0,-4,0,5,15,34,62,42,42,55,67,77,59,73,118,169,166,153,119,107,105,-1,0,14,3,21,45,55,59,35,44,57,75,95,135,131,151,160,176,177,186,139,132,4,3,3,-3,18,42,54,29,31,44,68,98,138,172,195,173,168,169,170,182,160,154,0,0,2,3,11,12,40,24,36,68,64,94,108,153,174,189,186,176,171,164,178,172,9,-2,2,2,6,5,28,19,36,69,131,161,149,150,150,182,184,192,182,159,168,170,-3,-19,23,5,10,12,14,33,57,59,107,181,192,172,177,162,178,186,184,164,153,151,-15,1,16,18,30,15,45,42,117,89,105,165,200,191,183,166,152,160,170,191,172,156,6,31,42,26,48,24,42,32,89,113,130,139,186,241,214,169,172,153,139,174,187,178,20,34,45,47,47,27,60,46,64,112,145,170,201,220,255,177,186,175,125,162,215,208,30,29,67,60,67,54,45,58,92,128,135,151,195,192,181,188,157,139,133,118,177,179,44,45,46,35,71,64,42,67,99,102,141,167,182,197,206,244,186,168,161,133,99,92,43,48,49,36,72,64,42,69,99,99,143,167,183,200,210,238,189,170,162,126,99,102],
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
