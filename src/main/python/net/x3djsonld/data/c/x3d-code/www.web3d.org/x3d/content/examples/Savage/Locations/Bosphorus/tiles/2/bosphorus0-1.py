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
    GeoViewpoint(description='GeoViewpoint_2_01',geoSystem=['GDC'],position=(40.84357772961846,29.327679094953055,57209.268365411845),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(41.06225017873692,29.030952729968703,0),geoSystem=['GDC'])),
    GeoLOD(center=(40.84357772961846,29.327679094953055,0.0),range=68651.125,child1Url=['../../tiles/3/bosphorus0-2.x3d'],child2Url=['../../tiles/3/bosphorus0-3.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/bosphorus0-1.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(40.6249052805,29.030952729968703,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028259654,zDimension=21,zSpacing=0.021867245,height=[51,273,100,303,151,149,48,40,79,98,56,80,88,99,231,102,118,144,164,183,316,326,34,8,0,6,54,22,87,5,11,59,26,27,46,175,240,177,119,267,282,313,352,359,0,0,0,0,0,0,1,2,7,-5,5,27,29,154,60,224,24,182,257,266,421,407,-1,1,0,2,0,0,0,0,-1,0,0,0,6,1,2,13,16,31,0,5,30,34,-1,0,0,0,-1,0,0,-1,0,1,1,0,1,0,0,-2,3,0,0,7,1,6,-3,-3,0,-1,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,-1,-1,-2,0,0,0,1,-1,-1,0,0,15,36,0,4,0,4,1,0,2,0,-2,-1,-2,-2,0,-1,0,-1,-3,0,-1,0,22,51,79,133,56,3,5,128,82,3,3,-2,-1,-1,-1,-2,1,0,0,3,-2,4,7,40,114,186,170,156,13,194,268,297,334,-1,-1,-2,0,0,-2,2,-32,7,8,14,49,69,194,177,180,87,150,322,270,401,406,0,0,-2,142,0,0,-2,0,-14,11,89,45,71,205,188,165,81,204,346,303,281,284,-1,0,0,68,0,0,0,-1,6,59,90,95,137,218,218,203,172,187,291,350,308,317,0,2,0,-1,0,8,21,40,75,75,29,99,150,253,194,266,198,231,247,283,311,314,0,0,0,-4,55,41,105,200,144,110,62,101,200,207,200,234,176,248,265,324,306,297,0,0,-1,8,83,137,126,254,320,134,99,84,146,213,165,191,196,217,344,278,295,299,0,-2,4,50,193,257,268,257,200,132,184,119,105,149,131,147,171,292,261,321,237,210,0,40,71,96,167,214,140,119,118,208,102,69,110,121,211,176,282,241,262,281,200,201,19,15,29,79,130,141,123,121,110,104,133,74,93,78,86,203,288,302,216,304,312,306,82,175,119,138,123,133,129,110,101,217,73,79,83,87,165,148,162,222,231,287,254,255,-1,151,93,141,157,177,218,134,177,304,141,64,100,104,86,173,165,230,188,208,128,104,-1,151,91,141,163,180,222,135,180,294,135,66,101,104,98,179,161,224,194,201,129,115],
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
