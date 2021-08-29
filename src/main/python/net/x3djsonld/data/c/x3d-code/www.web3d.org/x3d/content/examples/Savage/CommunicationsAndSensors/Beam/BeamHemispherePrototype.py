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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='BeamHemispherePrototype.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='29 January 2003',name='created'),
    meta(content='26 December 2014',name='modified'),
    meta(content='Produce wireframe or transparent beam hemispheres.',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamHemispherePrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    NavigationInfo(DEF='LockedDownInterface2D',type=["NONE"]),
    Background(skyColor=[(0,0.3,0.5)]),
    WorldInfo(info=["Produce wireframe or transparent beam hemispheres."],title='BeamHemisphereProto'),
    Viewpoint(description='Beam Hemisphere'),
    ProtoDeclare(appinfo='Produce wireframe or transparent beam hemisphere. Typical uses include sonar/radar/light beams. Negative range values invert base and apex at same relative location. Default: hemisphere with centroid at (0 0 0) and radius 1 atop x-z plane.',name='BeamHemisphere',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',appinfo='Assigning a name to a BeamHemisphere aids tracing',name='name',type='SFString',value='(unnamed)'),
        field(accessType='inputOnly',appinfo='(communications) is transmitted signal in contact with receiver or (sensor) is a target return detected?',name='contact',type='SFBool'),
        field(accessType='inputOnly',appinfo='distance in meters along x axis',name='range',type='SFFloat'),
        field(accessType='initializeOnly',appinfo='distance in meters used until eventIn range sent',name='defaultRange',type='SFFloat',value=1),
        field(accessType='initializeOnly',appinfo='whether wireframe beam is drawn',name='wireframe',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='whether solid beam is drawn',name='solid',type='SFBool',value=True),
        field(accessType='initializeOnly',appinfo='rendering color when contact=true',name='contactColor',type='SFColor',value=(.8,.1,.1)),
        field(accessType='initializeOnly',appinfo='rendering color when contact=false',name='noContactColor',type='SFColor',value=(.3,.5,.5)),
        field(accessType='inputOutput',appinfo='1 = fully transparent wireframe only',name='transparency',type='SFFloat',value=0)]
        #  BEAM_CONTROL beam scaling is controlled by range input 
        ),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Transform(DEF='BEAM_CONTROL',
            children=[
            Switch(DEF='WIREFRAME_SWITCH',whichChoice=0,
              children=[
              WorldInfo(info=["initial choice is null node (WorldInfo), meaning no wireframe beam"]),
              Shape(
                appearance=Appearance(
                  material=Material(DEF='WIRE_COLOR',diffuseColor=(.1,.1,.1),
                    IS=IS(
                      connect=[
                      connect(nodeField='transparency',protoField='transparency')]))),
                geometry=IndexedLineSet(coordIndex=[0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1],
                  coord=Coordinate(point=[(0.5257,0,0.8507),(0.3477,0,0.9376),(0.4636,0.1875,0.866),(0.1227,0,0.9924),(0.2531,0.2047,0.9455),(0.368,0.397,0.8408),(-0.1227,0,0.9924),(0,0.2116,0.9773),(0.1308,0.4233,0.8965),(0.2453,0.5955,0.765),(-0.3477,0,0.9376),(-0.2531,0.2047,0.9455),(-0.1308,0.4233,0.8965),(0,0.6142,0.7891),(0.1159,0.7501,0.6511),(-0.5257,0,0.8507),(-0.4636,0.1875,0.866),(-0.368,0.397,0.8408),(-0.2453,0.5955,0.765),(-0.1159,0.7501,0.6511),(0,0.8507,0.5257),(0.8507,0.5257,0),(0.866,0.4636,0.1875),(0.7501,0.6511,0.1159),(0.8408,0.368,0.397),(0.7408,0.5844,0.3313),(0.5955,0.765,0.2453),(0.765,0.2453,0.5955),(0.6849,0.4732,0.5541),(0.5541,0.6849,0.4732),(0.397,0.8408,0.368),(0.6511,0.1159,0.7501),(0.5844,0.3313,0.7408),(0.4732,0.5541,0.6849),(0.3313,0.7408,0.5844),(0.1875,0.866,0.4636),(0.9376,0.3477,0),(0.9924,0.1227,0),(0.9455,0.2531,0.2047),(0.9924,0,0),(0.9773,0,0.2116),(0.8965,0.1308,0.4233),(0.8965,0,0.4233),(0.7891,0,0.6142),(0.6511,0,0.7501),(-0.6511,0.1159,0.7501),(-0.765,0.2453,0.5955),(-0.5844,0.3313,0.7408),(-0.8408,0.368,0.397),(-0.6849,0.4732,0.5541),(-0.4732,0.5541,0.6849),(-0.866,0.4636,0.1875),(-0.7408,0.5844,0.3313),(-0.5541,0.6849,0.4732),(-0.3313,0.7408,0.5844),(-0.8507,0.5257,0),(-0.7501,0.6511,0.1159),(-0.5955,0.765,0.2453),(-0.397,0.8408,0.368),(-0.1875,0.866,0.4636),(-0.6511,0,0.7501),(-0.7891,0,0.6142),(-0.8965,0,0.4233),(-0.8965,0.1308,0.4233),(-0.9773,0,0.2116),(-0.9455,0.2531,0.2047),(-0.9924,0,0),(-0.9924,0.1227,0),(-0.9376,0.3477,0),(-0.7501,0.6511,-0.1159),(-0.5955,0.765,-0.2453),(-0.6142,0.7891,0),(-0.397,0.8408,-0.368),(-0.4233,0.8965,-0.1308),(-0.4233,0.8965,0.1308),(-0.1875,0.866,-0.4636),(-0.2047,0.9455,-0.2531),(-0.2116,0.9773,0),(-0.2047,0.9455,0.2531),(0,0.8507,-0.5257),(0,0.9376,-0.3477),(0,0.9924,-0.1227),(0,0.9924,0.1227),(0,0.9376,0.3477),(-0.866,0.4636,-0.1875),(-0.8408,0.368,-0.397),(-0.7408,0.5844,-0.3313),(-0.765,0.2453,-0.5955),(-0.6849,0.4732,-0.5541),(-0.5541,0.6849,-0.4732),(-0.6511,0.1159,-0.7501),(-0.5844,0.3313,-0.7408),(-0.4732,0.5541,-0.6849),(-0.3313,0.7408,-0.5844),(-0.5257,0,-0.8507),(-0.4636,0.1875,-0.866),(-0.368,0.397,-0.8408),(-0.2453,0.5955,-0.765),(-0.1159,0.7501,-0.6511),(0.1875,0.866,-0.4636),(0.397,0.8408,-0.368),(0.2047,0.9455,-0.2531),(0.5955,0.765,-0.2453),(0.4233,0.8965,-0.1308),(0.2116,0.9773,0),(0.7501,0.6511,-0.1159),(0.6142,0.7891,0),(0.4233,0.8965,0.1308),(0.2047,0.9455,0.2531),(0.1159,0.7501,-0.6511),(0.2453,0.5955,-0.765),(0.3313,0.7408,-0.5844),(0.368,0.397,-0.8408),(0.4732,0.5541,-0.6849),(0.5541,0.6849,-0.4732),(0.4636,0.1875,-0.866),(0.5844,0.3313,-0.7408),(0.6849,0.4732,-0.5541),(0.7408,0.5844,-0.3313),(0.5257,0,-0.8507),(0.6511,0.1159,-0.7501),(0.765,0.2453,-0.5955),(0.8408,0.368,-0.397),(0.866,0.4636,-0.1875),(0.3477,0,-0.9376),(0.1227,0,-0.9924),(-0.1227,0,-0.9924),(-0.3477,0,-0.9376),(0.2531,0.2047,-0.9455),(0.1308,0.4233,-0.8965),(0,0.2116,-0.9773),(0,0.6142,-0.7891),(-0.1308,0.4233,-0.8965),(-0.2531,0.2047,-0.9455),(0.6511,0,-0.7501),(0.9773,0,-0.2116),(0.8965,0,-0.4233),(0.9455,0.2531,-0.2047),(0.8965,0.1308,-0.4233),(0.7891,0,-0.6142),(-0.6511,0,-0.7501),(-0.7891,0,-0.6142),(-0.8965,0.1308,-0.4233),(-0.8965,0,-0.4233),(-0.9455,0.2531,-0.2047),(-0.9773,0,-0.2116)])))]),
            Switch(DEF='SOLID_SWITCH',whichChoice=0,
              children=[
              WorldInfo(info=["initial choice is null node (WorldInfo), meaning no solid beam"]),
              Shape(
                appearance=Appearance(
                  material=Material(DEF='CYLINDER_COLOR',diffuseColor=(.1,.1,.1),
                    IS=IS(
                      connect=[
                      connect(nodeField='transparency',protoField='transparency')]))),
                geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,1,3,4,-1,2,4,5,-1,3,6,7,-1,4,7,8,-1,5,8,9,-1,6,10,11,-1,7,11,12,-1,8,12,13,-1,9,13,14,-1,10,15,16,-1,11,16,17,-1,12,17,18,-1,13,18,19,-1,14,19,20,-1,1,4,2,-1,3,7,4,-1,4,8,5,-1,6,11,7,-1,7,12,8,-1,8,13,9,-1,10,16,11,-1,11,17,12,-1,12,18,13,-1,13,19,14,-1,21,22,23,-1,22,24,25,-1,23,25,26,-1,24,27,28,-1,25,28,29,-1,26,29,30,-1,27,31,32,-1,28,32,33,-1,29,33,34,-1,30,34,35,-1,31,0,2,-1,32,2,5,-1,33,5,9,-1,34,9,14,-1,35,14,20,-1,22,25,23,-1,24,28,25,-1,25,29,26,-1,27,32,28,-1,28,33,29,-1,29,34,30,-1,31,2,32,-1,32,5,33,-1,33,9,34,-1,34,14,35,-1,21,36,22,-1,36,37,38,-1,22,38,24,-1,37,39,40,-1,38,40,41,-1,24,41,27,-1,41,42,43,-1,27,43,31,-1,31,44,0,-1,36,38,22,-1,37,40,38,-1,38,41,24,-1,40,42,41,-1,41,43,27,-1,43,44,31,-1,15,45,16,-1,45,46,47,-1,16,47,17,-1,46,48,49,-1,47,49,50,-1,17,50,18,-1,48,51,52,-1,49,52,53,-1,50,53,54,-1,18,54,19,-1,51,55,56,-1,52,56,57,-1,53,57,58,-1,54,58,59,-1,19,59,20,-1,45,47,16,-1,46,49,47,-1,47,50,17,-1,48,52,49,-1,49,53,50,-1,50,54,18,-1,51,56,52,-1,52,57,53,-1,53,58,54,-1,54,59,19,-1,15,60,45,-1,45,61,46,-1,61,62,63,-1,46,63,48,-1,63,64,65,-1,48,65,51,-1,64,66,67,-1,65,67,68,-1,51,68,55,-1,60,61,45,-1,61,63,46,-1,62,64,63,-1,63,65,48,-1,64,67,65,-1,65,68,51,-1,55,69,56,-1,69,70,71,-1,56,71,57,-1,70,72,73,-1,71,73,74,-1,57,74,58,-1,72,75,76,-1,73,76,77,-1,74,77,78,-1,58,78,59,-1,75,79,80,-1,76,80,81,-1,77,81,82,-1,78,82,83,-1,59,83,20,-1,69,71,56,-1,70,73,71,-1,71,74,57,-1,72,76,73,-1,73,77,74,-1,74,78,58,-1,75,80,76,-1,76,81,77,-1,77,82,78,-1,78,83,59,-1,55,84,69,-1,84,85,86,-1,69,86,70,-1,85,87,88,-1,86,88,89,-1,70,89,72,-1,87,90,91,-1,88,91,92,-1,89,92,93,-1,72,93,75,-1,90,94,95,-1,91,95,96,-1,92,96,97,-1,93,97,98,-1,75,98,79,-1,84,86,69,-1,85,88,86,-1,86,89,70,-1,87,91,88,-1,88,92,89,-1,89,93,72,-1,90,95,91,-1,91,96,92,-1,92,97,93,-1,93,98,75,-1,79,99,80,-1,99,100,101,-1,80,101,81,-1,100,102,103,-1,101,103,104,-1,81,104,82,-1,102,105,106,-1,103,106,107,-1,104,107,108,-1,82,108,83,-1,105,21,23,-1,106,23,26,-1,107,26,30,-1,108,30,35,-1,83,35,20,-1,99,101,80,-1,100,103,101,-1,101,104,81,-1,102,106,103,-1,103,107,104,-1,104,108,82,-1,105,23,106,-1,106,26,107,-1,107,30,108,-1,108,35,83,-1,79,109,99,-1,109,110,111,-1,99,111,100,-1,110,112,113,-1,111,113,114,-1,100,114,102,-1,112,115,116,-1,113,116,117,-1,114,117,118,-1,102,118,105,-1,115,119,120,-1,116,120,121,-1,117,121,122,-1,118,122,123,-1,105,123,21,-1,109,111,99,-1,110,113,111,-1,111,114,100,-1,112,116,113,-1,113,117,114,-1,114,118,102,-1,115,120,116,-1,116,121,117,-1,117,122,118,-1,118,123,105,-1,119,115,124,-1,115,112,128,-1,124,128,125,-1,112,110,129,-1,128,129,130,-1,125,130,126,-1,110,109,131,-1,129,131,132,-1,130,132,133,-1,126,133,127,-1,109,79,98,-1,131,98,97,-1,132,97,96,-1,133,96,95,-1,127,95,94,-1,115,128,124,-1,112,129,128,-1,128,130,125,-1,110,131,129,-1,129,132,130,-1,130,133,126,-1,109,98,131,-1,131,97,132,-1,132,96,133,-1,133,95,127,-1,39,37,135,-1,37,36,137,-1,135,137,138,-1,136,138,139,-1,36,21,123,-1,137,123,122,-1,138,122,121,-1,139,121,120,-1,134,120,119,-1,37,137,135,-1,135,138,136,-1,36,123,137,-1,137,122,138,-1,138,121,139,-1,139,120,134,-1,94,90,140,-1,90,87,141,-1,87,85,142,-1,141,142,143,-1,85,84,144,-1,142,144,145,-1,84,55,68,-1,144,68,67,-1,145,67,66,-1,90,141,140,-1,87,142,141,-1,85,144,142,-1,142,145,143,-1,84,68,144,-1,144,67,145,-1],creaseAngle=.01,solid=False,
                  coord=Coordinate(point=[(0.5257,0,0.8507),(0.3477,0,0.9376),(0.4636,0.1875,0.866),(0.1227,0,0.9924),(0.2531,0.2047,0.9455),(0.368,0.397,0.8408),(-0.1227,0,0.9924),(0,0.2116,0.9773),(0.1308,0.4233,0.8965),(0.2453,0.5955,0.765),(-0.3477,0,0.9376),(-0.2531,0.2047,0.9455),(-0.1308,0.4233,0.8965),(0,0.6142,0.7891),(0.1159,0.7501,0.6511),(-0.5257,0,0.8507),(-0.4636,0.1875,0.866),(-0.368,0.397,0.8408),(-0.2453,0.5955,0.765),(-0.1159,0.7501,0.6511),(0,0.8507,0.5257),(0.8507,0.5257,0),(0.866,0.4636,0.1875),(0.7501,0.6511,0.1159),(0.8408,0.368,0.397),(0.7408,0.5844,0.3313),(0.5955,0.765,0.2453),(0.765,0.2453,0.5955),(0.6849,0.4732,0.5541),(0.5541,0.6849,0.4732),(0.397,0.8408,0.368),(0.6511,0.1159,0.7501),(0.5844,0.3313,0.7408),(0.4732,0.5541,0.6849),(0.3313,0.7408,0.5844),(0.1875,0.866,0.4636),(0.9376,0.3477,0),(0.9924,0.1227,0),(0.9455,0.2531,0.2047),(0.9924,0,0),(0.9773,0,0.2116),(0.8965,0.1308,0.4233),(0.8965,0,0.4233),(0.7891,0,0.6142),(0.6511,0,0.7501),(-0.6511,0.1159,0.7501),(-0.765,0.2453,0.5955),(-0.5844,0.3313,0.7408),(-0.8408,0.368,0.397),(-0.6849,0.4732,0.5541),(-0.4732,0.5541,0.6849),(-0.866,0.4636,0.1875),(-0.7408,0.5844,0.3313),(-0.5541,0.6849,0.4732),(-0.3313,0.7408,0.5844),(-0.8507,0.5257,0),(-0.7501,0.6511,0.1159),(-0.5955,0.765,0.2453),(-0.397,0.8408,0.368),(-0.1875,0.866,0.4636),(-0.6511,0,0.7501),(-0.7891,0,0.6142),(-0.8965,0,0.4233),(-0.8965,0.1308,0.4233),(-0.9773,0,0.2116),(-0.9455,0.2531,0.2047),(-0.9924,0,0),(-0.9924,0.1227,0),(-0.9376,0.3477,0),(-0.7501,0.6511,-0.1159),(-0.5955,0.765,-0.2453),(-0.6142,0.7891,0),(-0.397,0.8408,-0.368),(-0.4233,0.8965,-0.1308),(-0.4233,0.8965,0.1308),(-0.1875,0.866,-0.4636),(-0.2047,0.9455,-0.2531),(-0.2116,0.9773,0),(-0.2047,0.9455,0.2531),(0,0.8507,-0.5257),(0,0.9376,-0.3477),(0,0.9924,-0.1227),(0,0.9924,0.1227),(0,0.9376,0.3477),(-0.866,0.4636,-0.1875),(-0.8408,0.368,-0.397),(-0.7408,0.5844,-0.3313),(-0.765,0.2453,-0.5955),(-0.6849,0.4732,-0.5541),(-0.5541,0.6849,-0.4732),(-0.6511,0.1159,-0.7501),(-0.5844,0.3313,-0.7408),(-0.4732,0.5541,-0.6849),(-0.3313,0.7408,-0.5844),(-0.5257,0,-0.8507),(-0.4636,0.1875,-0.866),(-0.368,0.397,-0.8408),(-0.2453,0.5955,-0.765),(-0.1159,0.7501,-0.6511),(0.1875,0.866,-0.4636),(0.397,0.8408,-0.368),(0.2047,0.9455,-0.2531),(0.5955,0.765,-0.2453),(0.4233,0.8965,-0.1308),(0.2116,0.9773,0),(0.7501,0.6511,-0.1159),(0.6142,0.7891,0),(0.4233,0.8965,0.1308),(0.2047,0.9455,0.2531),(0.1159,0.7501,-0.6511),(0.2453,0.5955,-0.765),(0.3313,0.7408,-0.5844),(0.368,0.397,-0.8408),(0.4732,0.5541,-0.6849),(0.5541,0.6849,-0.4732),(0.4636,0.1875,-0.866),(0.5844,0.3313,-0.7408),(0.6849,0.4732,-0.5541),(0.7408,0.5844,-0.3313),(0.5257,0,-0.8507),(0.6511,0.1159,-0.7501),(0.765,0.2453,-0.5955),(0.8408,0.368,-0.397),(0.866,0.4636,-0.1875),(0.3477,0,-0.9376),(0.1227,0,-0.9924),(-0.1227,0,-0.9924),(-0.3477,0,-0.9376),(0.2531,0.2047,-0.9455),(0.1308,0.4233,-0.8965),(0,0.2116,-0.9773),(0,0.6142,-0.7891),(-0.1308,0.4233,-0.8965),(-0.2531,0.2047,-0.9455),(0.6511,0,-0.7501),(0.9773,0,-0.2116),(0.8965,0,-0.4233),(0.9455,0.2531,-0.2047),(0.8965,0.1308,-0.4233),(0.7891,0,-0.6142),(-0.6511,0,-0.7501),(-0.7891,0,-0.6142),(-0.8965,0.1308,-0.4233),(-0.8965,0,-0.4233),(-0.9455,0.2531,-0.2047),(-0.9773,0,-0.2116)])))]),
            Switch(DEF='CAP_SWITCH',whichChoice=1,
              children=[
              WorldInfo(info=["initial choice is null node (WorldInfo), meaning no solid beam"]),
              Transform(
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(DEF='CAP_COLOR',diffuseColor=(.1,.1,.1),
                      IS=IS(
                        connect=[
                        connect(nodeField='transparency',protoField='transparency')]))),
                  geometry=Cylinder(DEF='BeamTopCylinder',height=0.0001,side=False))])])])]),
        #  Non-renderable animation controls 
        Script(DEF='DETECTION',
          field=[
          field(accessType='initializeOnly',name='name',type='SFString'),
          field(accessType='inputOnly',name='contact',type='SFBool'),
          field(accessType='initializeOnly',name='wireframe',type='SFBool'),
          field(accessType='initializeOnly',name='solid',type='SFBool'),
          field(accessType='initializeOnly',name='contactColor',type='SFColor'),
          field(accessType='initializeOnly',name='noContactColor',type='SFColor'),
          field(accessType='outputOnly',name='beamColor',type='SFColor'),
          field(accessType='outputOnly',name='wireframeChoice',type='SFInt32'),
          field(accessType='outputOnly',name='solidChoice',type='SFInt32'),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='trace',type='SFBool',value=False)],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='contact',protoField='contact'),
            connect(nodeField='wireframe',protoField='wireframe'),
            connect(nodeField='solid',protoField='solid'),
            connect(nodeField='contactColor',protoField='contactColor'),
            connect(nodeField='noContactColor',protoField='noContactColor')])),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='WIRE_COLOR'),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='CYLINDER_COLOR'),
        ROUTE(fromField='beamColor',fromNode='DETECTION',toField='emissiveColor',toNode='CAP_COLOR'),
        ROUTE(fromField='wireframeChoice',fromNode='DETECTION',toField='whichChoice',toNode='WIREFRAME_SWITCH'),
        ROUTE(fromField='solidChoice',fromNode='DETECTION',toField='whichChoice',toNode='SOLID_SWITCH'),
        ROUTE(fromField='solidChoice',fromNode='DETECTION',toField='whichChoice',toNode='CAP_SWITCH'),
        Script(DEF='BEAM_CALCULATE',
          field=[
          field(accessType='initializeOnly',name='name',type='SFString'),
          field(accessType='inputOnly',name='range',type='SFFloat'),
          field(accessType='initializeOnly',name='defaultRange',type='SFFloat'),
          field(accessType='outputOnly',name='beamScale',type='SFVec3f'),
          field(accessType='outputOnly',name='direction',type='SFRotation'),
          field(accessType='initializeOnly',appinfo='internal flag to turn on Script tracing',name='trace',type='SFBool',value=False)],
          IS=IS(
            connect=[
            connect(nodeField='name',protoField='name'),
            connect(nodeField='range',protoField='range'),
            connect(nodeField='defaultRange',protoField='defaultRange')])),
        ROUTE(fromField='beamScale',fromNode='BEAM_CALCULATE',toField='scale',toNode='BEAM_CONTROL'),
        ROUTE(fromField='direction',fromNode='BEAM_CALCULATE',toField='rotation',toNode='BEAM_CONTROL')])),
    #  Viewable geometry for this scene is anchored text that links to an example showing ExternProtoDeclare usage of BeamCylinder 
    Anchor(description='Beam Hemisphere Example',url=["BeamHemisphereExample.x3d","../../CommunicationsAndSensors/Beam/BeamHemisphereExample.x3d","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamHemisphereExample.x3d","BeamHemisphereExample.wrl","../../CommunicationsAndSensors/Beam/BeamHemisphereExample.wrl","https://savage.nps.edu/Savage/CommunicationsAndSensors/Beam/BeamHemisphereExample.wrl"],
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,1),emissiveColor=(0,1,1))),
        geometry=Text(string=["BeamHemispherePrototype","is a Prototype definition file.","","To see an example scene","click this text and view","BeamHemisphereExample."],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"]))),
      #  Transparent box to simplify user selection (i.e. "clickability") 
      Shape(
        geometry=Box(size=(11,6,0.1)),
        appearance=Appearance(
          material=Material(transparency=1)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for BeamHemispherePrototype.py")
