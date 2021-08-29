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
        texture=ImageTexture(url=['../../images/4/StraitsOfHormuz-Small11-15.jpg'],repeatS=False,repeatT=False)),
      geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(26.681944553228952,57.3860914144574,0.0),geoSystem=["GD"],normalPerVertex=False,xDimension=22,xSpacing=0.0071733817,zDimension=23,zSpacing=0.0050952244,height=[616,564,538,424,369,339,301,323,311,317,367,446,453,487,496,521,509,466,455,384,402,411,525,492,404,376,326,290,279,279,292,311,356,370,417,404,426,453,455,395,371,398,414,427,502,389,387,310,279,258,264,273,297,310,327,361,363,320,366,402,388,382,380,402,407,421,362,375,301,283,241,248,256,264,271,289,312,322,310,347,354,341,358,376,395,410,410,428,329,287,266,232,241,257,279,305,317,282,291,305,339,359,388,451,401,429,409,416,429,425,268,255,238,227,240,277,291,333,400,318,330,319,429,430,435,428,425,444,489,451,442,464,237,228,216,225,244,322,411,430,363,362,356,371,430,527,512,492,487,494,519,526,469,481,219,209,214,241,266,354,432,446,474,380,392,342,423,513,534,521,481,589,571,537,480,479,197,214,219,318,407,336,401,446,641,466,450,388,479,559,568,574,531,534,544,531,532,500,195,215,214,246,244,337,467,577,684,473,405,489,491,615,504,563,508,513,531,579,521,547,191,201,206,220,279,373,536,642,757,492,391,496,466,544,469,512,465,504,543,549,562,548,205,196,210,230,380,428,557,588,763,431,368,536,467,406,486,417,503,534,506,544,540,571,188,196,203,252,505,538,554,570,645,384,363,412,377,389,431,482,513,461,546,563,609,578,178,185,200,235,460,528,593,601,526,317,311,346,378,382,388,411,497,495,518,542,512,543,173,189,202,399,446,505,505,513,457,294,340,429,531,585,435,434,513,463,485,536,534,549,193,279,370,417,453,477,455,502,506,294,335,400,534,555,622,509,455,468,480,505,495,551,313,314,371,356,435,433,461,529,417,279,314,390,578,676,658,488,485,532,493,521,503,521,283,241,347,325,345,382,399,369,299,296,302,352,423,499,546,540,570,468,509,516,540,524,249,250,279,283,306,369,422,258,266,255,308,340,423,400,541,577,592,519,516,517,543,550,236,254,255,266,323,360,249,235,256,287,311,379,469,419,448,533,512,577,517,514,528,540,234,271,268,288,329,263,223,246,276,306,358,354,332,410,394,453,514,537,542,530,546,550,245,250,266,282,283,216,225,312,325,274,310,327,326,346,369,407,484,505,505,534,511,522,241,250,265,281,280,216,226,318,322,270,314,322,319,347,364,420,481,496,504,531,502,524],
        geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(26.3456597347756,56.33160427093061,0),geoSystem=['GDC'])))])
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
