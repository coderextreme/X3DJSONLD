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
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
        texture=ImageTexture(url=['../../images/4/Malacca14-4.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(4.979361030700214,100.45856257932074,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.019880954,zDimension=23,zSpacing=0.014457387,height=[1,1,8,6,3,3,10,7,6,3,90,21,18,25,32,44,140,38,38,193,695,1119,7,9,5,8,9,5,2,5,3,2,46,15,24,28,16,127,32,34,41,380,741,1080,6,6,6,3,7,2,1,8,8,3,106,17,13,18,24,39,45,44,80,539,744,948,8,5,6,7,5,1,2,2,7,4,30,18,20,24,20,22,25,45,125,242,845,834,11,8,9,10,2,3,1,4,3,4,55,10,15,21,20,39,29,61,48,133,533,723,3,2,1,1,1,6,3,2,8,5,32,10,14,16,32,42,31,35,47,107,465,806,5,2,3,4,2,8,5,4,3,6,22,10,15,28,31,45,28,41,40,218,463,738,2,2,4,6,10,6,2,6,8,10,28,32,11,43,42,62,44,106,68,200,517,559,2,6,5,10,8,3,5,8,8,8,17,29,13,45,51,61,49,101,61,52,323,163,2,3,4,12,12,11,10,11,7,7,7,15,46,40,60,61,112,290,105,54,67,194,2,2,5,2,4,10,12,8,4,10,12,28,21,32,40,38,69,120,195,299,97,445,3,3,12,10,6,24,31,7,10,19,9,26,20,22,40,31,34,56,270,121,710,428,3,4,4,7,97,147,16,16,13,10,19,20,31,22,28,35,62,82,111,49,123,216,2,6,3,33,53,280,52,13,5,14,16,20,26,29,24,42,41,41,52,156,390,102,7,4,5,11,24,41,175,22,23,17,11,18,41,21,42,43,58,164,240,373,887,793,5,5,10,10,28,34,313,46,22,12,11,24,36,34,42,59,68,88,523,544,857,936,8,12,18,13,32,116,162,26,16,21,16,10,21,49,61,128,65,253,646,560,815,1274,4,7,7,17,24,128,217,55,18,20,16,13,22,36,134,58,66,157,630,682,725,1051,9,14,10,98,20,127,416,35,44,18,18,17,20,44,66,38,57,389,628,544,667,744,7,6,13,119,96,34,294,38,37,35,26,16,24,29,30,31,69,84,371,600,548,654,13,4,8,98,222,131,258,46,74,74,25,38,33,24,26,32,31,52,167,252,404,336,2,4,9,31,30,205,279,83,69,26,100,33,33,44,30,39,32,38,41,62,274,507,1,4,8,28,28,177,301,92,49,25,123,37,32,43,32,32,29,42,43,62,314,534],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])))])
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
