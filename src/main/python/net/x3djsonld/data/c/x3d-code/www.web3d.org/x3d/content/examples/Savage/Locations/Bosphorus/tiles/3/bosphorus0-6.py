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
    GeoViewpoint(description='GeoViewpoint_3_06',geoSystem=['GDC'],position=(40.679573392779616,29.401860686199143,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.679573392779616,29.401860686199143,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus0-12.x3d'],child2Url=['../../tiles/4/bosphorus0-13.x3d'],child3Url=['../../tiles/4/bosphorus1-12.x3d'],child4Url=['../../tiles/4/bosphorus1-13.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-6.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[63,96,80,106,80,67,95,92,110,88,146,164,117,160,123,143,223,223,179,145,123,90,44,91,58,106,57,47,89,122,86,96,152,103,139,87,162,151,224,226,199,180,104,88,35,72,45,93,70,44,54,132,101,71,102,65,75,129,197,189,222,245,182,125,94,97,30,41,43,85,58,31,58,97,92,53,53,110,110,113,190,225,216,257,202,187,198,175,30,26,77,56,36,48,86,144,69,52,83,82,157,161,209,194,186,290,239,231,200,166,19,43,63,26,27,70,115,150,60,57,148,148,171,212,178,228,204,294,210,220,275,277,14,38,47,23,52,129,121,85,35,110,122,162,190,173,122,192,145,217,204,292,297,304,10,11,44,16,48,129,133,97,30,111,159,250,192,149,92,186,139,159,222,251,276,279,4,5,41,38,30,69,76,74,49,131,210,269,183,258,197,134,70,134,163,197,225,239,0,0,5,34,7,51,55,25,20,70,210,255,174,234,205,54,156,117,83,95,179,204,-3,-2,-5,-1,4,17,14,15,18,28,39,102,119,132,123,42,155,122,113,37,114,103,1,1,2,0,-1,7,8,10,14,12,9,13,17,22,20,17,53,41,68,45,51,49,0,0,1,0,-2,2,6,8,7,9,8,8,5,2,2,3,6,8,7,12,18,20,0,-2,0,0,0,-1,2,3,3,4,2,1,-9,3,0,0,-1,0,2,4,6,8,0,1,0,1,0,0,-1,0,0,0,0,1,2,-1,0,0,0,4,2,-3,5,2,-1,4,0,0,0,0,0,0,1,-1,4,0,1,1,0,3,0,1,0,1,0,1,-2,-2,0,0,0,2,1,-1,0,0,1,0,1,0,0,2,3,0,0,0,-1,-1,0,4,0,2,0,0,-4,0,0,0,0,0,2,0,0,1,0,-1,1,-2,0,-3,3,1,-2,0,0,2,1,1,0,0,0,0,2,0,1,0,0,1,0,0,0,-1,0,1,2,3,1,2,2,1,1,1,1,1,0,0,2,-2,0,-2,3,0,2,3,0,-1,0,0,2,1,1,1,0,0,0,0,1,1,0,2,0,0,1,0,0,0,0,-1,0,0,3,0,1,1,0,1,0,1,1,3,0,2,0,0,1,0,0,0],
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
