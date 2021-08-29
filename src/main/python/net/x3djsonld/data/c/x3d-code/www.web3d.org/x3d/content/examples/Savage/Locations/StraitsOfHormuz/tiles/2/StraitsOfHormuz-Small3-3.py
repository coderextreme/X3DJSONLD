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
    GeoViewpoint(description='GeoViewpoint_2_33',geoSystem=['GDC'],position=(27.018229371682303,57.23545039395357,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.018229371682303,57.23545039395357,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small6-6.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small6-7.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small7-6.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small7-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small3-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.794039492713402,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[1,1,1,0,10,21,31,72,96,120,152,128,122,148,220,251,227,284,303,458,519,557,0,1,0,4,27,19,35,102,86,85,117,184,99,138,158,161,223,240,306,428,511,507,0,0,0,5,10,18,41,110,81,76,67,60,70,96,120,153,195,232,270,351,493,492,0,2,1,6,8,17,52,54,53,36,40,121,84,107,136,155,231,255,330,348,479,487,3,2,1,7,6,13,38,39,31,29,35,99,106,138,161,162,215,262,343,390,421,422,1,3,2,8,8,15,25,29,22,29,30,83,154,204,216,231,214,358,388,456,535,543,5,5,4,6,7,13,17,23,23,25,28,247,183,398,424,297,268,356,392,459,483,495,6,3,2,6,8,13,16,17,23,26,33,89,210,298,334,320,365,334,396,451,511,520,4,6,7,9,24,12,13,33,25,28,38,72,161,251,471,330,305,341,393,418,460,466,3,3,7,12,18,12,22,40,43,34,38,97,175,263,298,288,320,368,403,450,505,512,4,6,6,19,17,17,36,46,55,36,43,139,174,158,206,307,282,355,394,441,492,498,4,6,10,19,12,24,56,78,70,40,66,259,248,209,293,284,325,335,375,422,454,451,5,10,13,15,14,26,46,76,56,54,130,245,287,240,216,245,329,344,351,384,405,411,10,15,14,18,20,30,46,172,61,117,220,473,314,255,215,286,293,301,323,352,498,504,8,10,13,20,22,32,50,149,105,203,384,487,319,267,233,231,264,271,302,324,416,486,11,11,14,25,26,27,58,161,155,261,685,531,317,269,240,230,244,258,287,382,393,397,10,12,18,25,29,63,116,139,174,451,568,366,310,262,234,232,237,250,279,322,369,373,11,13,21,28,37,54,109,101,215,373,424,316,275,245,262,227,233,248,268,300,335,341,11,15,22,23,33,82,120,145,221,449,460,325,246,215,226,241,228,238,260,291,354,366,10,15,18,19,43,128,98,147,324,427,341,233,206,204,220,215,221,234,249,270,351,472,15,16,16,23,59,204,108,163,237,375,258,200,196,333,365,248,237,235,243,250,293,308,14,15,16,22,62,207,108,167,242,382,252,199,197,347,356,249,238,235,243,250,294,304],
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
