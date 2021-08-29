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
    GeoViewpoint(description='GeoViewpoint_3_21',geoSystem=['GDC'],position=(2.116798394735791,100.04106255949056,81647.44137804519),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(3.070985940057265,102.12856265864148,0),geoSystem=['GDC'])),
    GeoLOD(center=(2.116798394735791,100.04106255949056,0.0),range=97976.93,child1Url=['../../tiles/4/Malacca4-2.x3d'],child2Url=['../../tiles/4/Malacca4-3.x3d'],child3Url=['../../tiles/4/Malacca5-2.x3d'],child4Url=['../../tiles/4/Malacca5-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/Malacca2-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(1.7987358796286328,99.62356253966037,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.03976191,zDimension=22,zSpacing=0.030291667,height=[364,199,170,197,88,53,42,57,55,71,17,17,69,69,45,113,64,48,48,49,37,33,580,129,244,79,99,51,82,128,67,87,43,53,34,45,59,40,43,28,25,28,22,27,465,134,267,278,155,118,97,72,76,75,22,20,33,47,38,25,34,26,43,35,27,22,824,319,495,270,177,128,145,68,75,43,60,16,17,25,20,17,28,23,25,30,25,15,712,449,187,177,198,126,148,57,94,26,49,54,15,15,20,19,25,11,14,14,10,15,727,181,89,142,204,93,117,68,74,59,31,32,13,12,25,24,17,11,14,25,10,7,112,131,101,186,126,56,127,89,42,53,33,56,38,8,14,19,18,13,10,29,8,11,866,168,151,139,101,54,35,64,63,74,58,39,36,10,7,16,10,11,10,13,26,20,214,112,143,193,207,135,51,44,50,55,51,23,28,20,10,15,9,8,10,25,33,23,358,107,96,76,72,288,35,28,36,54,52,19,29,9,4,7,8,9,31,35,32,27,419,305,67,53,43,60,25,37,25,21,34,24,24,7,5,6,6,9,34,32,33,33,880,254,105,59,50,41,30,20,17,11,9,15,12,8,5,5,5,9,32,31,25,28,667,482,106,65,49,43,32,13,15,22,6,10,10,7,6,7,15,9,29,33,30,25,382,375,121,75,50,62,52,24,10,8,9,5,7,6,11,3,7,27,33,31,27,25,347,205,100,70,73,29,27,21,13,10,6,5,8,6,1,5,6,34,26,29,24,22,182,139,83,62,66,26,17,10,7,6,6,6,7,7,3,8,8,23,28,28,19,8,194,127,67,49,43,22,11,6,5,6,2,4,8,4,7,5,10,27,29,22,-1,4,120,86,63,48,31,15,15,7,9,11,7,3,9,7,6,4,25,25,26,4,2,-2,142,76,56,41,31,24,13,9,8,10,7,3,1,8,5,1,17,32,27,0,1,2,82,258,56,31,22,15,7,6,8,11,7,2,12,6,5,3,28,25,17,0,0,0,211,130,24,15,20,19,9,4,3,9,10,2,4,1,0,12,25,18,6,1,0,3,204,105,21,16,18,17,8,4,3,9,11,1,3,1,1,10,24,20,7,0,2,2],
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
