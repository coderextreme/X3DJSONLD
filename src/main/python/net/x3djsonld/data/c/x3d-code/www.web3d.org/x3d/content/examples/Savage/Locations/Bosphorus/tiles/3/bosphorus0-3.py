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
    GeoViewpoint(description='GeoViewpoint_3_03',geoSystem=['GDC'],position=(40.84357772961846,29.47604227744523,40740.95510878033),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,29.47604227744523,0.0),range=48889.145,child1Url=['../../tiles/4/bosphorus0-3.x3d'],child2Url=['../../tiles/4/bosphorus1-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/bosphorus0-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.327679094953055,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.014129827,zDimension=21,zSpacing=0.021867245,height=[54,89,80,86,96,160,105,121,234,175,94,121,152,65,127,137,157,165,175,234,272,322,25,66,27,108,49,91,163,219,217,224,191,57,113,302,288,293,293,288,273,360,370,348,5,32,27,92,27,231,138,174,70,155,217,268,45,171,137,250,220,279,304,306,405,416,1,0,0,5,7,0,1,0,1,5,13,41,16,60,35,5,-4,-1,3,16,22,32,1,0,0,0,1,0,0,3,0,1,0,3,2,-5,0,2,1,2,0,3,2,4,0,0,1,0,0,0,0,1,-1,0,1,0,1,1,0,1,0,0,3,2,1,0,0,0,15,0,35,-1,-1,0,0,0,-1,6,0,3,-5,3,4,3,5,-4,-1,-1,0,-3,22,56,50,68,85,72,138,91,77,7,2,75,5,41,139,138,74,4,0,4,2,4,7,31,39,73,121,179,187,172,176,171,154,131,21,172,182,207,251,265,265,313,11,43,49,53,68,111,188,213,174,145,187,150,117,40,178,237,339,324,245,270,338,402,95,129,45,78,74,118,199,262,183,167,152,113,90,114,186,225,306,371,298,270,283,286,89,106,95,94,135,158,216,232,216,195,203,190,171,138,191,265,261,286,347,340,295,313,30,76,99,125,150,192,250,227,194,252,273,253,215,166,222,234,233,279,278,303,311,312,62,99,101,128,198,198,210,246,200,172,228,221,182,169,221,274,263,248,352,297,340,300,100,95,84,116,145,155,217,211,155,161,190,164,197,177,227,214,310,354,229,295,305,298,180,86,119,119,101,114,144,151,136,109,157,186,173,202,287,248,252,335,314,209,271,225,98,68,69,107,113,109,126,245,225,100,161,197,271,280,248,240,236,259,305,317,210,203,134,72,74,90,92,117,78,144,87,156,200,227,297,248,290,246,189,214,304,352,239,313,76,63,79,95,88,98,79,78,185,124,140,208,200,206,185,167,220,273,281,310,196,260,139,75,64,74,101,103,95,147,103,142,145,103,189,196,227,206,205,239,241,204,223,117,134,70,66,75,103,102,94,150,107,135,157,106,190,185,227,210,211,237,237,198,219,124],
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
