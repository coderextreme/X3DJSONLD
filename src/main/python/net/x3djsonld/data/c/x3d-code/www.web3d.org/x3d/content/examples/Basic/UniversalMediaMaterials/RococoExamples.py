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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='RococoExamples.x3d',name='title'),
    meta(content="Example ExternProtoDeclare/ProtoInstance usage of X3D/VRML materials, originally converted from SGI's Open Inventor material examples.",name='description'),
    meta(content='David Roussel',name='creator'),
    meta(content='James Harney, Don Brutzman NPS',name='translator'),
    meta(content='7 April 2002',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://vrmlstuff.free.fr/materials',name='reference'),
    meta(content='Universal Media Material Library',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoExamples.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RococoExamples.x3d'),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo00',url=["RococoPrototypes.x3d#Rococo00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo00","RococoPrototypes.wrl#Rococo00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo00"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo01',url=["RococoPrototypes.x3d#Rococo01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo01","RococoPrototypes.wrl#Rococo01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo01"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo02',url=["RococoPrototypes.x3d#Rococo02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo02","RococoPrototypes.wrl#Rococo02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo02"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo03',url=["RococoPrototypes.x3d#Rococo03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo03","RococoPrototypes.wrl#Rococo03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo03"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo04',url=["RococoPrototypes.x3d#Rococo04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo04","RococoPrototypes.wrl#Rococo04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo04"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo05',url=["RococoPrototypes.x3d#Rococo05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo05","RococoPrototypes.wrl#Rococo05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo05"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo06',url=["RococoPrototypes.x3d#Rococo06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo06","RococoPrototypes.wrl#Rococo06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo06"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo07',url=["RococoPrototypes.x3d#Rococo07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo07","RococoPrototypes.wrl#Rococo07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo07"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo08',url=["RococoPrototypes.x3d#Rococo08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo08","RococoPrototypes.wrl#Rococo08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo08"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo09',url=["RococoPrototypes.x3d#Rococo09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo09","RococoPrototypes.wrl#Rococo09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo09"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo10',url=["RococoPrototypes.x3d#Rococo10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo10","RococoPrototypes.wrl#Rococo10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo10"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo11',url=["RococoPrototypes.x3d#Rococo11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo11","RococoPrototypes.wrl#Rococo11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo11"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo12',url=["RococoPrototypes.x3d#Rococo12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo12","RococoPrototypes.wrl#Rococo12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo12"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo13',url=["RococoPrototypes.x3d#Rococo13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo13","RococoPrototypes.wrl#Rococo13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo13"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo14',url=["RococoPrototypes.x3d#Rococo14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo14","RococoPrototypes.wrl#Rococo14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo14"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo15',url=["RococoPrototypes.x3d#Rococo15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo15","RococoPrototypes.wrl#Rococo15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo15"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo16',url=["RococoPrototypes.x3d#Rococo16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo16","RococoPrototypes.wrl#Rococo16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo16"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo17',url=["RococoPrototypes.x3d#Rococo17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo17","RococoPrototypes.wrl#Rococo17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo17"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo18',url=["RococoPrototypes.x3d#Rococo18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo18","RococoPrototypes.wrl#Rococo18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo18"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo19',url=["RococoPrototypes.x3d#Rococo19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo19","RococoPrototypes.wrl#Rococo19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo19"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo20',url=["RococoPrototypes.x3d#Rococo20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo20","RococoPrototypes.wrl#Rococo20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo20"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo21',url=["RococoPrototypes.x3d#Rococo21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo21","RococoPrototypes.wrl#Rococo21","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo21"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo22',url=["RococoPrototypes.x3d#Rococo22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo22","RococoPrototypes.wrl#Rococo22","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo22"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo23',url=["RococoPrototypes.x3d#Rococo23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo23","RococoPrototypes.wrl#Rococo23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo23"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo24',url=["RococoPrototypes.x3d#Rococo24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo24","RococoPrototypes.wrl#Rococo24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo24"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo25',url=["RococoPrototypes.x3d#Rococo25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo25","RococoPrototypes.wrl#Rococo25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo25"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo26',url=["RococoPrototypes.x3d#Rococo26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo26","RococoPrototypes.wrl#Rococo26","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo26"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo27',url=["RococoPrototypes.x3d#Rococo27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo27","RococoPrototypes.wrl#Rococo27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo27"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo28',url=["RococoPrototypes.x3d#Rococo28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo28","RococoPrototypes.wrl#Rococo28","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo28"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo29',url=["RococoPrototypes.x3d#Rococo29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo29","RococoPrototypes.wrl#Rococo29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo29"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo30',url=["RococoPrototypes.x3d#Rococo30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo30","RococoPrototypes.wrl#Rococo30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo30"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo31',url=["RococoPrototypes.x3d#Rococo31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo31","RococoPrototypes.wrl#Rococo31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo31"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo32',url=["RococoPrototypes.x3d#Rococo32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo32","RococoPrototypes.wrl#Rococo32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo32"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo33',url=["RococoPrototypes.x3d#Rococo33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo33","RococoPrototypes.wrl#Rococo33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo33"]),
    ExternProtoDeclare(appinfo='UniversalMediaMaterials prototype',documentation='https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials',name='Rococo34',url=["RococoPrototypes.x3d#Rococo34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.x3d#Rococo34","RococoPrototypes.wrl#Rococo34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.wrl#Rococo34"]),
    Group(
      children=[
      NavigationInfo(headlight=False),
      Viewpoint(DEF='Front',description='Front view',position=(0.0,0.0,12.0)),
      Viewpoint(DEF='PersRight',description='Low Right',orientation=(0.74291,0.30772,0.59447,1.2171),position=(6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='PersLeft',description='Low Left',orientation=(0.74291,-0.30772,-0.59447,1.2171),position=(-6.9282,-6.9282,6.9282)),
      Viewpoint(DEF='Back',description='Back view',orientation=(0.0,1.0,0.0,3.1416),position=(0.0,0.0,-12.0)),
      Transform(DEF='Close_travel',
        children=[
        PositionInterpolator(DEF='Close_Mover',key=[0.0,0.25,0.5,0.75,1.0],keyValue=[(0.0,2.5,0.0),(0.0,0.0,0.0),(0.0,-2.5,0.0),(0.0,0.0,0.0),(0.0,2.5,0.0)]),
        TimeSensor(DEF='Close_Time',cycleInterval=12.0,loop=True),
        Viewpoint(DEF='Close',description='Close Front',position=(0.0,0.0,6.0))]),
      DirectionalLight(direction=(1.0,-1.0,-1.0)),
      DirectionalLight(direction=(0.0,1.0,-0.5),intensity=0.5),
      Anchor(description='Back to front view',url=["#Front"],
        children=[
        Transform(translation=(0.0,0.0,-0.5),
          children=[
          Inline(url=["gridBack.x3d","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.x3d","gridBack.wrl","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/gridBack.wrl"])])]),
      Viewpoint(DEF='View00',description='Rococo00',position=(-3.75,3.75,3.0)),
      Transform(translation=(-3.75,3.75,0.0),
        children=[
        Anchor(description='Rococo00 view',url=["#View00"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo00')),
            geometry=Sphere(DEF='Ball',radius=0.5))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo00',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo00","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo00"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(DEF='TextMat',diffuseColor=(1.0,1.0,1.0))),
              geometry=Text(string=["Rococo00"],
                fontStyle=FontStyle(DEF='Style',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.3,style_='BOLD')))])])]),
      Viewpoint(DEF='View01',description='Rococo01',position=(-2.25,3.75,3.0)),
      Transform(translation=(-2.25,3.75,0.0),
        children=[
        Anchor(description='Rococo01 view',url=["#View01"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo01')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo01',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo01","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo01"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo01"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View02',description='Rococo02',position=(-0.75,3.75,3.0)),
      Transform(translation=(-0.75,3.75,0.0),
        children=[
        Anchor(description='Rococo02 view',url=["#View02"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo02')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo02',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo02","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo02"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo02"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View03',description='Rococo03',position=(0.75,3.75,3.0)),
      Transform(translation=(0.75,3.75,0.0),
        children=[
        Anchor(description='Rococo03 view',url=["#View03"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo03')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo03',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo03","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo03"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo03"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View04',description='Rococo04',position=(2.25,3.75,3.0)),
      Transform(translation=(2.25,3.75,0.0),
        children=[
        Anchor(description='Rococo04 view',url=["#View04"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo04')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo04',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo04","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo04"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo04"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View05',description='Rococo05',position=(3.75,3.75,3.0)),
      Transform(translation=(3.75,3.75,0.0),
        children=[
        Anchor(description='Rococo05 view',url=["#View05"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo05')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo05',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo05","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo05"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo05"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View06',description='Rococo06',position=(-3.75,2.25,3.0)),
      Transform(translation=(-3.75,2.25,0.0),
        children=[
        Anchor(description='Rococo06 view',url=["#View06"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo06')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo06',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo06","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo06"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo06"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View07',description='Rococo07',position=(-2.25,2.25,3.0)),
      Transform(translation=(-2.25,2.25,0.0),
        children=[
        Anchor(description='Rococo07 view',url=["#View07"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo07')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo07',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo07","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo07"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo07"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View08',description='Rococo08',position=(-0.75,2.25,3.0)),
      Transform(translation=(-0.75,2.25,0.0),
        children=[
        Anchor(description='Rococo08 view',url=["#View08"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo08')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo08',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo08","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo08"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo08"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View09',description='Rococo09',position=(0.75,2.25,3.0)),
      Transform(translation=(0.75,2.25,0.0),
        children=[
        Anchor(description='Rococo09 view',url=["#View09"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo09')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo09',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo09","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo09"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo09"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View10',description='Rococo10',position=(2.25,2.25,3.0)),
      Transform(translation=(2.25,2.25,0.0),
        children=[
        Anchor(description='Rococo10 view',url=["#View10"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo10')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo10',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo10","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo10"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo10"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View11',description='Rococo11',position=(3.75,2.25,3.0)),
      Transform(translation=(3.75,2.25,0.0),
        children=[
        Anchor(description='Rococo11 view',url=["#View11"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo11')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo11',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo11","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo11"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo11"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View12',description='Rococo12',position=(-3.75,0.75,3.0)),
      Transform(translation=(-3.75,0.75,0.0),
        children=[
        Anchor(description='Rococo12 view',url=["#View12"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo12')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo12',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo12","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo12"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo12"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View13',description='Rococo13',position=(-2.25,0.75,3.0)),
      Transform(translation=(-2.25,0.75,0.0),
        children=[
        Anchor(description='Rococo13 view',url=["#View13"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo13')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo13',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo13","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo13"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo13"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View14',description='Rococo14',position=(-0.75,0.75,3.0)),
      Transform(translation=(-0.75,0.75,0.0),
        children=[
        Anchor(description='Rococo14 view',url=["#View14"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo14')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo14',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo14","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo14"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo14"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View15',description='Rococo15',position=(0.75,0.75,3.0)),
      Transform(translation=(0.75,0.75,0.0),
        children=[
        Anchor(description='Rococo15 view',url=["#View15"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo15')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo15',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo15","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo15"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo15"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View16',description='Rococo16',position=(2.25,0.75,3.0)),
      Transform(translation=(2.25,0.75,0.0),
        children=[
        Anchor(description='Rococo16 view',url=["#View16"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo16')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo16',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo16","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo16"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo16"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View17',description='Rococo17',position=(3.75,0.75,3.0)),
      Transform(translation=(3.75,0.75,0.0),
        children=[
        Anchor(description='Rococo17 view',url=["#View17"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo17')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo17',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo17","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo17"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo17"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View18',description='Rococo18',position=(-3.75,-0.75,3.0)),
      Transform(translation=(-3.75,-0.75,0.0),
        children=[
        Anchor(description='Rococo18 view',url=["#View18"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo18')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo18',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo18","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo18"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo18"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View19',description='Rococo19',position=(-2.25,-0.75,3.0)),
      Transform(translation=(-2.25,-0.75,0.0),
        children=[
        Anchor(description='Rococo19 view',url=["#View19"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo19')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo19',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo19","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo19"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo19"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View20',description='Rococo20',position=(-0.75,-0.75,3.0)),
      Transform(translation=(-0.75,-0.75,0.0),
        children=[
        Anchor(description='Rococo20 view',url=["#View20"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo20')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo20',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo20","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo20"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo20"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View21',description='Rococo21',position=(0.75,-0.75,3.0)),
      Transform(translation=(0.75,-0.75,0.0),
        children=[
        Anchor(description='Rococo21 view',url=["#View21"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo21')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo21',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo1","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo21"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo21"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View22',description='Rococo22',position=(2.25,-0.75,3.0)),
      Transform(translation=(2.25,-0.75,0.0),
        children=[
        Anchor(description='Rococo22 view',url=["#View22"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo22')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo22',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo2","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo22"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo22"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View23',description='Rococo23',position=(3.75,-0.75,3.0)),
      Transform(translation=(3.75,-0.75,0.0),
        children=[
        Anchor(description='Rococo23 view',url=["#View23"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo23')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo23',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo23","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo23"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo23"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View24',description='Rococo24',position=(-3.75,-2.25,3.0)),
      Transform(translation=(-3.75,-2.25,0.0),
        children=[
        Anchor(description='Rococo24 view',url=["#View24"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo24')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo24',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo24","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo24"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo24"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View25',description='Rococo25',position=(-2.25,-2.25,3.0)),
      Transform(translation=(-2.25,-2.25,0.0),
        children=[
        Anchor(description='Rococo25 view',url=["#View25"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo25')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo25',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo25","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo25"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo25"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View26',description='Rococo26',position=(-0.75,-2.25,3.0)),
      Transform(translation=(-0.75,-2.25,0.0),
        children=[
        Anchor(description='Rococo26 view',url=["#View26"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo26')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo26',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo6","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo26"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo26"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View27',description='Rococo27',position=(0.75,-2.25,3.0)),
      Transform(translation=(0.75,-2.25,0.0),
        children=[
        Anchor(description='Rococo27 view',url=["#View27"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo27')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo27',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo27","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo27"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo27"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View28',description='Rococo28',position=(2.25,-2.25,3.0)),
      Transform(translation=(2.25,-2.25,0.0),
        children=[
        Anchor(description='Rococo28 view',url=["#View28"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo28')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo28',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo8","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo28"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo28"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View29',description='Rococo29',position=(3.75,-2.25,3.0)),
      Transform(translation=(3.75,-2.25,0.0),
        children=[
        Anchor(description='Rococo29 view',url=["#View29"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo29')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo29',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo29","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo29"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo29"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View30',description='Rococo30',position=(-3.75,-3.75,3.0)),
      Transform(translation=(-3.75,-3.75,0.0),
        children=[
        Anchor(description='Rococo30 view',url=["#View30"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo30')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo30',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo30","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo30"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo30"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View31',description='Rococo31',position=(-2.25,-3.75,3.0)),
      Transform(translation=(-2.25,-3.75,0.0),
        children=[
        Anchor(description='Rococo31 view',url=["#View31"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo31')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo31',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo31","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo31"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo31"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View32',description='Rococo32',position=(-0.75,-3.75,3.0)),
      Transform(translation=(-0.75,-3.75,0.0),
        children=[
        Anchor(description='Rococo32 view',url=["#View32"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo32')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo32',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo32","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo32"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo32"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View33',description='Rococo33',position=(0.75,-3.75,3.0)),
      Transform(translation=(0.75,-3.75,0.0),
        children=[
        Anchor(description='Rococo33 view',url=["#View33"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo33')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo33',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo33","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo33"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo33"],
                fontStyle=FontStyle(USE='Style')))])])]),
      Viewpoint(DEF='View34',description='Rococo34',position=(2.25,-3.75,3.0)),
      Transform(translation=(2.25,-3.75,0.0),
        children=[
        Anchor(description='Rococo34 view',url=["#View34"],
          children=[
          Shape(
            appearance=Appearance(
              material=ProtoInstance(name='Rococo34')),
            geometry=Sphere(USE='Ball'))]),
        Transform(translation=(0.0,0.3,0.5),
          children=[
          Anchor(description='Rococo34',parameter=["target=_source"],url=["RococoPrototypes.html#ProtoDeclare_Rococo34","https://www.web3d.org/x3d/content/examples/Basic/UniversalMediaMaterials/RococoPrototypes.html#ProtoDeclare_Rococo34"],
            children=[
            Shape(
              appearance=Appearance(
                material=Material(USE='TextMat')),
              geometry=Text(string=["Rococo34"],
                fontStyle=FontStyle(USE='Style')))])])])]),
    ROUTE(fromField='fraction_changed',fromNode='Close_Time',toField='set_fraction',toNode='Close_Mover'),
    ROUTE(fromField='value_changed',fromNode='Close_Mover',toField='set_translation',toNode='Close_travel')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RococoExamples.py")
