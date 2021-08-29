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
    GeoViewpoint(description='GeoViewpoint_3_07',geoSystem=['GDC'],position=(40.679573392779616,29.55022386869132,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.679573392779616,29.55022386869132,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus0-14.x3d'],child2Url=['../../tiles/4/bosphorus0-15.x3d'],child3Url=['../../tiles/4/bosphorus1-14.x3d'],child4Url=['../../tiles/4/bosphorus1-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.47604227744523,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[90,165,112,122,141,85,64,91,128,134,140,158,157,197,170,222,173,226,236,259,279,304,88,225,217,101,100,59,63,71,111,93,105,116,124,163,181,223,240,206,249,351,385,382,97,124,257,164,168,96,109,107,99,111,138,151,159,164,223,278,281,325,314,369,452,464,175,64,130,184,71,120,198,187,155,145,182,190,228,217,300,314,289,359,235,328,437,405,166,144,50,66,137,248,310,328,255,252,283,274,292,284,282,271,272,395,316,355,343,344,277,160,131,128,187,214,253,291,380,327,335,412,394,341,344,305,275,323,361,314,427,472,304,144,82,49,148,277,321,277,302,180,300,306,339,391,406,409,353,336,366,418,381,333,279,200,108,36,60,142,264,341,151,172,255,299,350,394,409,377,398,415,405,412,440,413,239,275,216,140,26,77,192,133,185,302,215,262,264,303,285,289,271,266,368,413,460,458,204,227,241,184,98,41,153,119,119,153,238,135,210,236,221,216,261,158,207,326,323,340,103,195,190,106,43,56,163,123,51,70,86,68,99,163,117,125,167,101,202,226,262,217,49,92,116,111,18,107,144,93,75,18,14,18,14,33,50,56,91,40,95,116,149,161,20,28,48,52,18,69,80,77,43,26,4,0,6,5,9,6,21,15,31,52,57,55,8,10,13,11,12,16,23,44,30,3,5,1,1,0,0,2,2,0,5,9,14,16,2,5,8,9,11,13,10,7,6,3,0,2,6,0,0,0,0,0,1,2,0,1,1,3,7,7,9,3,5,5,4,1,0,1,2,0,1,1,0,2,0,2,2,1,-1,2,3,6,4,3,1,0,3,0,-1,0,0,0,0,-1,0,-1,-1,0,0,0,-3,1,3,2,2,0,8,0,2,2,2,-2,0,1,0,3,1,0,6,1,0,4,-1,-7,0,0,0,1,0,1,1,0,0,-1,0,1,0,0,2,2,2,0,2,2,3,1,0,2,0,12,2,1,1,0,0,2,0,1,0,-1,0,1,2,3,1,0,0,0,0,0,1,2,1,0,1,0,0,1,0,1,1,1,4,4,2,1,7,3,0,1,0,0,0,1,0,0,2,1,0,1,0,0,1,2,3,2,1,1,6,4],
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
