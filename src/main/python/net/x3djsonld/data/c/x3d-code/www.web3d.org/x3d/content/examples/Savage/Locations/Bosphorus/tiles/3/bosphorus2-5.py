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
    GeoViewpoint(description='GeoViewpoint_3_25',geoSystem=['GDC'],position=(40.898245841898074,29.253497503706967,14302.317091352961),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.898245841898074,29.253497503706967,0.0),range=17162.781,child1Url=['../../tiles/4/bosphorus4-10.x3d'],child2Url=['../../tiles/4/bosphorus4-11.x3d'],child3Url=['../../tiles/4/bosphorus5-10.x3d'],child4Url=['../../tiles/4/bosphorus5-11.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus2-5.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.84357772961846,29.17931591246088,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0070649134,zDimension=22,zSpacing=0.0052064867,height=[0,0,-1,-1,-1,0,0,7,-20,1,7,8,-31,4,5,0,0,5,5,21,32,43,-1,0,0,-1,0,0,2,3,-9,-2,-2,2,-10,9,11,3,5,3,17,38,47,60,-1,0,0,0,-1,0,0,0,-4,11,3,1,-10,4,42,-23,11,15,19,50,72,100,-1,0,0,0,0,0,-1,0,-2,-2,5,11,5,0,0,-5,17,41,56,56,126,159,-1,0,-1,0,0,-1,0,0,3,-2,0,3,16,6,31,12,47,60,97,78,128,155,-1,-1,0,1,0,-1,-7,-5,-4,-1,-2,3,4,3,28,49,47,112,71,82,104,107,-1,-2,0,-2,-3,6,-7,-9,0,1,3,0,14,20,6,31,56,60,75,80,87,82,-1,0,1,0,1,1,0,22,8,0,10,24,29,44,28,36,18,14,58,61,63,80,-1,0,-2,-8,8,2,3,11,10,17,73,40,46,49,47,65,19,54,38,21,65,49,-9,0,0,3,4,13,23,15,16,25,103,83,64,64,59,75,49,64,55,50,28,51,7,18,17,37,28,33,28,25,38,72,105,137,87,81,85,49,81,80,70,70,58,45,16,64,45,52,40,41,40,39,80,132,124,126,104,93,88,78,91,96,93,92,86,74,38,73,71,70,58,59,59,59,86,172,185,138,152,111,102,109,106,98,91,91,79,60,58,59,66,90,38,90,97,94,110,216,219,214,169,132,130,113,106,104,91,91,90,88,40,50,61,84,106,116,138,120,182,289,200,171,166,179,145,143,124,104,98,92,72,67,58,67,85,104,114,138,165,199,331,298,225,193,227,221,161,141,120,107,98,90,71,71,54,60,87,90,117,137,178,262,329,288,274,257,236,240,208,151,146,133,102,86,84,100,78,110,115,111,123,170,177,264,342,262,327,350,304,228,189,150,138,137,103,96,86,92,131,148,167,140,129,180,223,341,273,278,420,507,381,239,191,163,145,124,118,116,96,98,277,235,198,183,157,173,220,274,222,270,431,364,380,253,208,187,182,152,153,146,114,115,310,254,219,203,196,180,259,234,236,282,468,440,319,236,205,188,168,159,148,124,117,129,311,255,219,205,196,182,259,233,237,287,468,446,325,232,201,186,163,157,149,124,120,133],
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
