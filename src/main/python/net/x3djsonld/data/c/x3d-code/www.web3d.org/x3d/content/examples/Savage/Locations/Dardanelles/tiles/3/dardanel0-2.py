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
    component(level=1,name='Geospatial'),
    meta(content='dardanel0-2.x3d',name='title'),
    meta(content='X3D Earth tile file for Dardanelles location',name='description'),
    meta(content='Byounghyun Yoo, Don Brutzman',name='creator'),
    meta(content='6 September 2010',name='created'),
    meta(content='12 Jume 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/Dardanelles.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/Locations/Dardanelles/tiles/3/dardanel0-2.x3d',name='identifier'),
    meta(content='Rez, http://planet-earth.org/Rez/RezIndex.html',name='generator'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../../../license.html',name='license')]),
  Scene=Scene(
    children=[
    GeoViewpoint(description='GeoViewpoint_3_02',geoSystem=['GDC'],orientation=(-1,0,0,1.57),position=(39.79722229877732,26.741479970612037,67800.45584024992),
      geoOrigin=GeoOrigin(DEF='ORIGIN',geoCoords=(40.16643453115464,26.49987728550963,0),geoSystem=['GDC'])),
    GeoLOD(center=(39.79722229877732,26.741479970612037,0.0),child1Url=['../../tiles/4/dardanel0-2.x3d'],child2Url=['../../tiles/4/dardanel1-2.x3d'],range=81360.55,
      geoOrigin=GeoOrigin(USE='ORIGIN'),
      rootNode=[
      Group(
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.4,0.6,0.3),emissiveColor=(0,0.05,0)),
            texture=ImageTexture(repeatS=False,repeatT=False,url=['../../images/3/dardanel0-2.jpg'])),
          geometry=GeoElevationGrid(colorPerVertex=False,geoGridOrigin=(39.4280100664,26.49987728550963,0.0),geoSystem=["GD"],height=[1,1,0,0,3,-1,1,1,0,0,1,0,0,21,9,51,151,200,121,99,194,235,0,0,0,1,0,-1,1,0,2,0,3,0,0,2,2,23,39,63,81,99,131,86,2,0,1,4,0,1,3,3,0,4,1,1,4,1,5,5,2,1,3,11,21,23,158,229,21,16,-12,8,0,17,-4,4,2,2,6,3,3,0,4,1,0,3,5,5,449,404,464,354,209,181,113,94,58,93,80,27,93,51,28,24,-3,4,-18,5,4,3,317,334,338,386,550,603,566,628,607,677,781,830,881,542,331,513,123,64,63,33,89,74,222,336,337,372,508,668,693,817,716,842,1087,733,952,953,1046,902,797,762,393,381,361,380,246,318,386,534,654,596,760,772,901,947,1008,1343,1221,1250,1211,1540,1541,1234,819,356,568,561,180,255,357,517,613,751,563,448,329,390,746,985,782,840,1282,1353,1195,1144,1224,1014,1076,1131,111,144,176,266,290,318,306,291,188,210,241,294,260,455,725,926,1208,966,1232,1330,1309,1165,67,76,95,119,127,133,288,254,140,215,269,226,278,264,432,440,611,687,721,748,984,976,99,128,150,119,88,156,141,163,236,263,433,551,433,355,274,280,309,345,373,430,613,594,218,185,217,203,222,145,117,147,186,247,243,303,438,611,495,721,596,574,646,773,374,345,333,233,301,401,341,298,178,194,176,182,215,239,300,480,492,318,286,357,315,374,285,329,457,341,456,604,527,354,339,352,241,376,261,376,424,337,266,198,216,135,201,167,218,256,387,432,408,407,523,479,626,435,439,399,414,352,261,271,169,229,113,103,115,92,168,156,344,335,241,276,258,209,528,338,388,748,470,568,499,336,295,211,163,164,163,173,128,142,269,204,237,212,102,127,144,294,378,291,458,487,463,271,321,325,288,347,228,213,205,217,142,59,256,235,354,426,519,439,339,374,348,448,590,485,450,363,574,613,500,369,314,327,54,54,160,348,369,459,475,665,562,600,551,636,545,376,369,175,211,247,247,370,238,160,87,174,167,232,383,393,360,539,618,468,435,307,338,277,223,185,194,148,179,142,96,92,84,172,162,242,389,415,367,547,602,458,432,303,338,273,220,185,197,151,183,144,95,93],normalPerVertex=False,xDimension=22,xSpacing=0.023009779,zDimension=22,zSpacing=0.03516307,
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

print ("python x3d.py load successful for dardanel0-2.py")
