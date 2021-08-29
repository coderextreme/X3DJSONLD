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
    GeoViewpoint(description='GeoViewpoint_2_23',geoSystem=['GDC'],position=(26.569849613744502,57.23545039395357,58327.3831173974),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(26.569849613744502,57.23545039395357,0.0),range=69992.86,child1Url=['../../tiles/3/StraitsOfHormuz-Small4-6.x3d'],child2Url=['../../tiles/3/StraitsOfHormuz-Small4-7.x3d'],child3Url=['../../tiles/3/StraitsOfHormuz-Small5-6.x3d'],child4Url=['../../tiles/3/StraitsOfHormuz-Small5-7.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/2/StraitsOfHormuz-Small2-3.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.3456597347756,56.93416835294592,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.028693527,zDimension=22,zSpacing=0.021351418,height=[0,0,5,0,0,2,1,3,8,17,22,30,40,43,48,72,165,295,499,791,1065,1045,0,2,1,0,2,2,0,5,13,13,20,41,36,48,57,69,165,335,511,873,889,973,2,3,3,2,1,3,3,4,8,10,23,49,85,47,78,122,153,388,542,695,731,738,0,3,3,2,3,3,5,7,15,14,26,54,78,59,127,144,214,405,318,610,597,595,2,3,0,0,3,3,4,9,7,16,56,45,49,72,108,247,206,294,369,634,609,623,2,4,1,1,3,2,4,7,13,51,27,34,46,98,204,296,254,510,404,487,647,642,3,2,2,0,3,1,5,10,31,105,123,37,57,144,309,334,260,487,527,849,1052,1136,2,3,1,1,2,2,5,18,48,181,43,47,100,129,391,303,401,534,528,779,697,612,0,4,1,1,0,3,14,17,77,117,55,64,91,110,160,200,353,351,492,421,461,497,0,3,3,3,5,5,12,44,197,65,78,200,202,221,268,277,273,379,356,361,450,515,0,2,2,3,3,6,18,74,184,81,141,166,193,279,190,288,318,318,312,399,454,488,0,4,3,3,2,6,22,80,101,259,223,343,267,307,373,275,313,398,324,369,387,397,2,3,1,4,3,12,24,138,94,223,314,489,260,378,321,280,363,317,352,335,385,389,2,2,2,0,2,8,76,51,78,220,212,261,281,366,289,512,594,412,359,399,508,553,2,2,0,2,2,11,173,81,231,216,233,263,330,374,397,481,521,403,497,449,468,462,2,3,2,0,1,21,67,108,139,357,348,302,384,338,499,515,313,303,435,412,426,425,0,0,0,2,2,45,47,89,253,385,355,259,471,290,441,244,253,409,475,430,459,448,3,1,2,0,2,79,52,70,155,357,291,258,332,308,248,196,332,675,566,482,573,561,0,1,1,0,19,20,38,61,134,199,198,364,197,261,173,175,503,399,480,517,528,541,0,2,0,0,21,48,33,62,89,164,210,273,181,169,261,244,354,281,414,548,552,545,1,0,1,0,11,21,32,74,95,121,160,127,119,144,219,249,223,280,302,449,528,555,1,1,1,0,10,21,31,72,96,120,152,128,122,148,220,251,227,284,303,458,519,557],
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
