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
    GeoViewpoint(description='GeoViewpoint_3_77',geoSystem=['GDC'],position=(27.130324311166753,57.3860914144574,29163.6915586987),orientation=(-1,0,0,1.57),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])),
    GeoLOD(center=(27.130324311166753,57.3860914144574,0.0),range=34996.43,child1Url=['../../tiles/4/StraitsOfHormuz-Small14-14.x3d'],child2Url=['../../tiles/4/StraitsOfHormuz-Small14-15.x3d'],child3Url=['../../tiles/4/StraitsOfHormuz-Small15-14.x3d'],child4Url=['../../tiles/4/StraitsOfHormuz-Small15-15.x3d'],
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(url=['../../images/3/StraitsOfHormuz-Small7-7.jpg'],repeatS=False,repeatT=False)),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(27.018229371682303,57.23545039395357,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0143467635,zDimension=22,zSpacing=0.010675709,height=[35,42,94,168,217,176,290,371,359,286,284,345,297,365,377,386,406,426,451,478,487,490,39,43,120,253,185,162,225,239,269,280,289,307,292,320,365,389,401,425,443,474,503,506,42,55,115,230,164,173,160,204,219,239,277,287,283,315,377,376,394,419,426,467,501,502,45,60,167,239,207,237,162,187,220,268,322,278,296,328,343,386,385,406,432,464,487,486,55,100,209,215,215,234,188,180,276,363,302,251,338,348,376,354,376,404,428,450,469,468,79,141,276,235,322,235,239,180,285,302,260,262,300,335,354,356,370,391,412,429,440,434,103,148,255,347,335,226,204,189,222,227,234,285,307,304,349,342,359,375,395,406,409,412,149,244,379,367,309,249,223,232,204,223,254,292,342,344,319,329,344,364,376,384,405,407,182,281,512,353,319,258,284,214,210,278,283,294,333,304,310,317,332,347,359,383,475,453,252,501,498,372,326,289,249,257,242,238,271,283,290,282,293,304,318,334,345,514,515,513,331,654,597,408,334,278,283,240,234,226,263,259,277,272,278,292,307,321,331,426,443,439,444,691,550,378,324,294,263,255,236,261,245,247,247,259,268,281,297,307,353,402,412,401,558,682,613,375,322,289,269,252,238,236,235,241,242,250,260,274,287,303,456,364,390,390,639,526,490,367,317,291,269,252,241,232,235,234,240,248,258,271,289,311,334,361,394,394,595,564,424,358,312,285,265,246,236,230,230,233,239,245,254,268,286,304,328,353,381,384,589,489,359,324,308,281,260,243,238,228,227,233,235,243,249,263,279,295,318,341,364,369,432,419,329,300,282,267,257,249,244,229,228,230,241,237,246,259,271,288,306,330,342,342,439,387,313,291,271,256,234,272,287,247,226,231,233,246,244,252,266,281,298,341,335,333,418,351,301,282,262,243,222,225,277,251,233,224,233,235,241,250,263,276,295,311,328,330,511,348,382,262,243,228,212,208,218,284,251,224,228,232,235,246,258,274,288,304,402,454,384,279,264,237,220,205,189,203,207,209,215,220,224,228,233,241,252,266,282,289,346,381,381,279,263,235,220,205,190,204,208,209,214,222,223,229,232,241,252,265,281,288,351,381],
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
