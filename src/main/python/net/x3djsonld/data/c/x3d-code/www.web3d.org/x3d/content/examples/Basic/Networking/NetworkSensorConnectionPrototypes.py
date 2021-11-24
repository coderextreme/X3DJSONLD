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
    meta(content='NetworkSensorConnectionPrototypes.x3d',name='title'),
    meta(content='Prototypes for NetworkSensor and Connection nodes',name='description'),
    meta(content='Don Brutzman, Chris Thorne, Don McGregor, Shun-Yun Hu',name='creator'),
    meta(content='14 March 2008',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='NetworkSensorConnectionNodes.html',name='reference'),
    meta(content='http://www.xj3d.org/tutorials/general_sai.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-CD-19775-2.2/Part02/X3D_SAI.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/specifications/ISO-IEC-19777-2-X3DLanguageBindings-Java/Part2/X3D_Java.html',name='reference'),
    meta(content='Prototypes for NetworkSensor and Connection nodes',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Networking/NetworkSensorConnectionPrototypes.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NetworkSensorConnectionPrototypes.x3d'),
    ProtoDeclare(name='NetworkSensor',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',appinfo='X3DMetadataObject node type only',name='metadata',type='SFNode',
          #  Metadata initialization node is NULL 
          ),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='initializeOnly',appinfo='Connection node only',name='connection',type='SFNode',
          #  Default Connection node goes here 
          ),
        field(accessType='inputOnly',name='httpRequest',type='SFString'),
        field(accessType='outputOnly',name='httpResponse',type='MFString'),
        field(accessType='initializeOnly',name='channelId',type='SFString',value='true'),
        #  TODO: how to handle user-defined fields? 
        #  perhaps corresponding MFString arrays for fieldName, fieldType, fieldAccessType, fieldInitialValues 
        #  for now we'll simply try to get a MFString field to work 
        field(accessType='inputOnly',appinfo='ROUTE StringSensor output here',name='textInput',type='SFString'),
        field(accessType='outputOnly',appinfo='ROUTE this output to Text node string field',name='textOutput',type='MFString')]
        #  TODO: can we get consistent type for textInput? 
        ),
      ProtoBody=ProtoBody(
        #  First node determines node type of prototype 
        children=[
        Script(DEF='NetworkSensorScript',url=["NetworkSensorScript.class","https://www.web3d.org/x3d/content/examples/Networking/NetworkSensorScript.class"],
          field=[
          field(accessType='inputOutput',name='enabled',type='SFBool'),
          field(accessType='inputOutput',name='metadata',type='SFNode'),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='initializeOnly',appinfo='Connection node only',name='connection',type='SFNode'),
          field(accessType='inputOnly',name='httpRequest',type='SFString'),
          field(accessType='outputOnly',name='httpResponse',type='MFString'),
          field(accessType='initializeOnly',name='channelId',type='SFString')],
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='metadata',protoField='metadata'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='connection',protoField='connection'),
            connect(nodeField='httpRequest',protoField='httpRequest'),
            connect(nodeField='httpResponse',protoField='httpResponse'),
            connect(nodeField='channelId',protoField='channelId')]))]
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        )),
    ProtoDeclare(name='Connection',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='enabled',type='SFBool',value=True),
        field(accessType='inputOutput',name='metadata',type='SFNode',
          #  Metadata initialization node is NULL 
          ),
        field(accessType='outputOnly',name='isActive',type='SFBool'),
        field(accessType='inputOutput',name='url',type='MFString',value=["x3dp://localhost:80"]),
        #  1 for HTTP, 2 for HTTP 1.1, 3 for TCP/IP, 4 for UDP, 5 for multicast 
        #  spec TODO: change these code numbers to string enumerations instead 
        field(accessType='initializeOnly',name='protocol',type='SFInt32',value=0),
        field(accessType='inputOutput',name='timeOut',type='SFTime',value=0),
        field(accessType='inputOnly',name='secure',type='SFBool')]),
      ProtoBody=ProtoBody(
        #  First node determines node type of prototype 
        children=[
        Script(DEF='ConnectionScript',url=["ConnectionScript.class","https://www.web3d.org/x3d/content/examples/Networking/ConnectionScript.class"],
          field=[
          field(accessType='inputOutput',name='enabled',type='SFBool'),
          field(accessType='outputOnly',name='isActive',type='SFBool'),
          field(accessType='inputOutput',name='url',type='MFString'),
          field(accessType='initializeOnly',name='protocol',type='SFInt32'),
          field(accessType='inputOutput',name='timeOut',type='SFTime'),
          field(accessType='inputOnly',name='secure',type='SFBool')],
          IS=IS(
            connect=[
            connect(nodeField='enabled',protoField='enabled'),
            connect(nodeField='isActive',protoField='isActive'),
            connect(nodeField='url',protoField='url'),
            connect(nodeField='protocol',protoField='protocol'),
            connect(nodeField='timeOut',protoField='timeOut'),
            connect(nodeField='secure',protoField='secure')]))]
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        )),
    #  We'll put our initial example next. First the listener will output networked messages to a Text node 
    Shape(
      geometry=Text(DEF='MessageOutput',string=["NetworkSensor messages will appear here"],
        fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])),
      appearance=Appearance(
        material=Material(ambientIntensity=0.25,diffuseColor=(0.374008,0,0.748016),shininess=0.4,specularColor=(0.909091,0.909091,0.909091),transparency=0.35))),
    #  Only need a single Connection definition for this example 
    ProtoInstance(DEF='OurNetworkChannel',name='Connection',
      fieldValue=[
      fieldValue(name='url',value=["x3dp://localhost:80"]),
      #  protocol 1=http 
      fieldValue(name='protocol',value=1),
      fieldValue(name='timeOut',value=10),
      fieldValue(name='secure',value=False)]),
    #  Here is the listener that connects and sends strings to the Text node 
    ProtoInstance(DEF='TextListener',name='NetworkSensor',
      fieldValue=[
      fieldValue(name='connection',
        children=[
        ProtoInstance(USE='OurNetworkChannel')]),
      fieldValue(name='channelId',value='78')]),
    #  TODO: once a single string can successfully be sent, insert an intermediate Script to remember last 10 strings 
    ROUTE(fromField='textOutput',fromNode='TextListener',toField='string',toNode='MessageOutput'),
    #  Now capture text from local keyboard, send to scenes listening to this network connection 
    ProtoInstance(DEF='TextSender',name='NetworkSensor',
      fieldValue=[
      fieldValue(name='connection',
        children=[
        ProtoInstance(USE='OurNetworkChannel')]),
      fieldValue(name='channelId',value='78')]),
    StringSensor(DEF='KeyboardDetector'),
    ROUTE(fromField='finalText',fromNode='KeyboardDetector',toField='textInput',toNode='TextSender')]
    #  done. we should now be able to type text and have it appear in the output for whoever's using the same scene. 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NetworkSensorConnectionPrototypes.py")
